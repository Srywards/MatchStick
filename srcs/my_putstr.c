/*
** my_putstr.c for  in /home/da-pur_c/delivery/PSU/PSU_2016_my_printf/printf/srcs
** 
** Made by Clem Da
** Login   <da-pur_c@epitech.net>
** 
** Started on  Thu Nov 17 15:59:56 2016 Clem Da
** Last update Thu Nov 17 16:11:16 2016 Clem Da
*/

#include "my.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      my_putchar(str[i]);
      i++;
    }
}
