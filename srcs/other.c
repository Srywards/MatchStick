/*
** other.c for  in /home/da-pur_c/delivery/CPE/CPE_2016_matchstick/srcs
** 
** Made by Clem Da
** Login   <da-pur_c@epitech.net>
** 
** Started on  Mon Feb 13 22:06:54 2017 Clem Da
** Last update Thu Feb 23 20:52:33 2017 Clem Da
*/

#include "my.h"

int	my_count2(char **tab)
{
  int	i;
  int	j;
  int	k;

  k = 0;
  i = 1;
  j = 1;
  while (tab[i])
    {
      j = 1;
      while (tab[i][j] != '*')
	{
	  if (tab[i][j] == '|')
	    {
	      k++;
	      break ;
	    }
	  j++;
	}
      i++;
    }
  return (k);
}

int	count_max(char **tab, int i)
{
  int	lel;
  int	j;

  j = 1;
  lel = 0;
  while (tab[i][j] != '*')
    {
      if (tab[i][j] == '|')
	lel++;
      j++;
    }
  return (lel);
}

int	my_count(char **tab, int i)
{
  int	j;

  j = 1;
  while (tab[i][j] != '*')
    {
      if (tab[i][j] == '|')
	return (0);
      j++;
    }
  return (1);
}

int	my_verif(char **map)
{
  int	i;
  int	j;

  i = 1;
  while (map[i])
    {
      j = 1;
      while (map[i][j] != '*')
	{
	  if (map[i][j] == '|')
	    return (0);
	  j++;
	}
      i++;
    }
  return (1);
}

int	my_error(char *str)
{
  my_printf("error : %s\n", str);
  return (84);
}
