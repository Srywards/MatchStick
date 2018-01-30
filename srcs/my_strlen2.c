/*
** my_strlen2.c for  in /home/da-pur_c/delivery/CPE/CPE_2016_matchstick
** 
** Made by Clem Da
** Login   <da-pur_c@epitech.net>
** 
** Started on  Mon Feb 13 21:58:49 2017 Clem Da
** Last update Mon Feb 13 22:02:43 2017 Clem Da
*/

#include "my.h"

int	my_strlen2(char *str)
{
  int	i;

  i = 1;
  while (str[i] != '*')
    i++;
  return (i);
}
