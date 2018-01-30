/*
** my_put_nbr.c for my_put_nbr in /home/da-pur_c/rendu/Piscine_C_J03
** 
** Made by Clément DA PURIFICACAO
** Login   <da-pur_c@epitech.net>
** 
** Started on  Tue Oct  6 13:24:09 2015 Clément DA PURIFICACAO
** Last update Mon Feb 13 14:15:19 2017 Clem Da
*/

#include "my.h"

void	my_nbr(int nb)
{
  int	frite;

  frite = 0;
  if (nb < 0)
    {
      my_putchar('-');
      if (nb == -2147483648)
	{
	  frite = 1;
	  nb++;
	}
      nb = nb * -1;
    }
  if (nb >= 10)
    my_nbr(nb / 10);
  if (frite == 1)
    {
      frite = 0;
      my_putchar(nb % 10 + '1');
    }
  else
    my_putchar(nb % 10 + '0');
}
