/*
** my_put_nbr.c for my_put_nbr in /home/da-pur_c/rendu/Piscine_C_J03
** 
** Made by Clément DA PURIFICACAO
** Login   <da-pur_c@epitech.net>
** 
** Started on  Tue Oct  6 13:24:09 2015 Clément DA PURIFICACAO
** Last update Mon Nov 21 14:49:48 2016 Clem Da
*/

#include "my.h"

int	my_put_nbrbase(int nb, char *base)
{
  int	i;

  i = my_strlen(base);
  if (nb < 0)
    {
      nb = nb * -1;
      my_putchar('-');
    }
  if (nb / i)
    {
      my_nbr(nb / i);
      my_putchar(base[nb % i]);
    }
}
