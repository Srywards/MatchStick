/*
** create_map.c for  in /home/da-pur_c/delivery/CPE/CPE_2016_matchstick/srcs
** 
** Made by Clem Da
** Login   <da-pur_c@epitech.net>
** 
** Started on  Mon Feb 13 20:27:49 2017 Clem Da
** Last update Wed Feb 22 14:35:49 2017 Clem Da
*/

#include "my.h"

char	**my_map2(char **tab, int nb, int nb2, t_return *bonsoir)
{
  int	i;
  int	j;
  int	k;

  i = 1;
  j = my_strlen(tab[i]) / 2;
  k = my_strlen(tab[i]) / 2;
  while (i <= nb)
    {
      if (i == 1)
	tab[i][my_strlen(tab[i]) / 2] = '|';
      else
	{
	  while (k != j + i - 1)
	    tab[i][k++] = '|';
	  while (k != j - i)
	    tab[i][k--] = '|';
	}
      i++;
    }
  aff_tab(tab);
  boucladin(tab, bonsoir, nb, nb2);
}

char	**my_map(int nb, int nb2, t_return *bonsoir)
{
  t_oui	use;

  use.i = nb * 2 + 1;
  use.j = nb + 2;
  use.k = use.l = use.m = 0;
  if ((use.tab = malloc(sizeof(char **) * use.i + 1)) == NULL)
    return (NULL);
  while (use.k < use.j)
    {
      use.m = 0;
      if ((use.tab[use.l] = malloc(sizeof(char *) * use.i + 1)) == NULL)
	return (NULL);
      if (use.l == 0 || use.l == use.j - 1)
	while (use.m < use.i) use.tab[use.l][use.m++] = '*';
      else
	{
	  use.m = 1;
	  use.tab[use.l][0] = '*';
	  while (use.m < use.i - 1) use.tab[use.l][use.m++] = ' ';
	  use.tab[use.l][use.m] = '*';
	}
      use.tab[use.l][use.m + 1] = '\0';
      use.l++;use.k++;
    }
  my_map2(use.tab, nb, nb2, bonsoir);
}
