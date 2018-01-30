/*
** main.c for  in /home/da-pur_c/delivery/CPE/CPE_2016_matchstick
** 
** Made by Clem Da
** Login   <da-pur_c@epitech.net>
** 
** Started on  Mon Feb 13 11:37:28 2017 Clem Da
** Last update Fri Mar 10 10:13:13 2017 Clem Da
*/

#include "my.h"

void	batonminus(int i, int j, char **tab)
{
  int	k;
  int	l;

  l = 1;
  while (l <= i)
    {
      k = my_strlen2(tab[j]) - 1;
      while (tab[j][k] != '|' && tab[j][k] != '*')
	k--;
      if (tab[j][k] == '|')
	tab[j][k] = ' ';
      l++;
    }
  if (my_verif(tab) == 1)
    aff_tab2(tab);
  else
    aff_tab(tab);
}

void	my_aigo(char **tab, int i, int j)
{
  int	nb;
  int	nb2;

  my_printf("AI's turn...\n");
  srand(time(NULL));
  nb2 = rand()%i + 1;
  if (my_count(tab, nb2) != 0)
    while (my_count(tab, nb2 = rand()%i + 1) != 0);
  my_printf("AI removed %d match(es) from line %d\n", 1, nb2);
  batonminus(1, nb2, tab);
}

int	my_algo(char **tab, int nb, int nb2, t_return *b)
{
  if ((b->s = my_algo1_1(b->s, nb, tab)) == NULL) return (b->i = 3);
  my_printf("Matches: ");
  while ((b->str = get_next_line(0)) != NULL)
    {
      if (if_is_num(b->str) == 1 || my_getnbr(b->str) == 0 ||
	  my_getnbr(b->str) < 1 || my_getnbr(b->str) > nb2 ||
	  my_getnbr(b->str) > count_max(tab, my_getnbr(b->s)))
	{
	  if (if_is_num(b->str) == 1)
	    my_printf("Error: invalid input (positive number expected)\
\nLine : ");
	  else if (my_getnbr(b->str) == 0)
	    my_printf("Error: you have to remove at least one match\nLine : ");
	  else if (my_getnbr(b->str) > nb2)
	    my_printf("Error: you cannot remove more than %i matches\
 per turn\nLine : ", nb2);
	  else my_printf("Error: not enough matches on this line\nLine : ");
	  if ((b->s = my_algo2(tab, nb, nb2, b->s)) == NULL) return (b->i = 3);
	  my_printf("Matches: ");
	}
      else break ;
    }
  if (b->str == NULL) return (b->i = 3);
  my_printf("Player removed %s match(es) from line %s\n", b->str, b->s);
  batonminus(my_getnbr(b->str), my_getnbr(b->s), tab);
}

void	boucladin(char **tab, t_return *bonsoir, int nb, int nb2)
{
  while (my_verif(tab) == 0)
    {
      if (my_algo(tab, nb, nb2, bonsoir) == 84)
	break ;
      if (bonsoir->i == 3)
	{
	  bonsoir->i = 0;
	  break ;
	}
      if (my_verif(tab) != 0)
	{
	  bonsoir->i = 2;
	  break ;
	}
      my_aigo(tab, nb, nb2);
      if (my_verif(tab) != 0)
	{
	  bonsoir->i = 1;
	  break ;
	}
    }
}

int	main(int ac, char **av)
{
  t_return	*bonsoir;

  if ((bonsoir = malloc(sizeof(bonsoir))) == NULL)
    return (84);
  if (ac == 3)
    {
      if (my_getnbr(av[1]) < 1 || my_getnbr(av[1]) > 100)
	return (my_error2());
      if (my_getnbr(av[2]) < 1)
	return (my_error2());
      my_map(my_getnbr(av[1]), my_getnbr(av[2]), bonsoir);
      if (bonsoir->i == 1)
	my_printf("I lost... snif... but I'll get you next time!!\n");
      if (bonsoir->i == 2)
	my_printf("You lost, too bad...\n");
      return (bonsoir->i);
    }
  else
    return (my_error2());
  return (0);
}
