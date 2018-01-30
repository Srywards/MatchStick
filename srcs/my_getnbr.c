/*
** my_getnbr.c for my_getnbr in /home/da-pur_c/delivery/CPool_Day04
** 
** Made by Clément Da-Purificacao
** Login   <da-pur_c@epitech.net>
** 
** Started on  Fri Oct  7 09:18:08 2016 Clément Da-Purificacao
** Last update Mon Feb 13 14:19:16 2017 Clem Da
*/

#include "my.h"

int	qualite(char *str)
{
  int	i;
  int	s;

  i = 0;
  s = 1;
  while (str[i])
    {
      if (str[i] == '-')
	s*= -1;
      i++;
    }
  return (s);
}

int	my_getnbr(char *str)
{
  int		i;
  int		j;
  double	k;
  int		oui;

  i = 0;
  j = my_strlen(str);
  k = 0;
  oui = qualite(str);
  while (i < j && str[i] >= '0' && str[i] <= '9' || str[i] == '-' || str[i] == '+')
    {
      if (str[i] != '-' && str[i] != '+')
	{
	  k = k * 10;
	  k = (k + str[i] - '0');
	}
      i++;
    }
  k = k * oui;
  if ((k < -2147483648) || (k > 2147483647))
    return (0);
  return ((int)k);
}
