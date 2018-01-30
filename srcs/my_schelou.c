/*
** my_schelou.c for  in /home/da-pur_c/delivery/PSU/PSU_2016_my_printf/printf/srcs
** 
** Made by Clem Da
** Login   <da-pur_c@epitech.net>
** 
** Started on  Mon Nov 21 14:44:47 2016 Clem Da
** Last update Tue Nov 22 19:22:22 2016 Clem Da
*/

#include "my.h"

void	my_schelou(char *str)
{
  int   i;

  i = 0;
  while (str[i])
    {
      while (str[i] >= 32 && str[i] < 127 && str[i])
	my_putchar(str[i++]);
      if ((str[i] < 32 || str[i] == 127) && str[i])
	{
	  my_putchar('\\');
	  if (str[i] <= 7)
	    my_putstr("00");
	  if (str[i] > 7 && str[i] < 32)
	    my_putchar('0');
	  my_octal(str[i]);
	  i++;
	}
    }
}
