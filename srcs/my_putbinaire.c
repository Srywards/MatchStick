/*
** my_put_nbr.c for my_put_nbr in /home/da-pur_c/rendu/Piscine_C_J03
** 
** Made by Clément DA PURIFICACAO
** Login   <da-pur_c@epitech.net>
** 
** Started on  Tue Oct  6 13:24:09 2015 Clément DA PURIFICACAO
** Last update Mon Nov 21 14:58:05 2016 Clem Da
*/

#include "my.h"

void	my_binaire(int nb)
{
  int	res;
  int	div;
  int	i;
  char	*base;

  base = "01";
  i = my_strlen(base);
  div = 1;
  while ((nb / div) >= i)
    div = div * i;
  while (div > 0)
    {
      res = (nb /div) % i;
      my_putchar(base[res]);
      div = div / i;
    }
}
