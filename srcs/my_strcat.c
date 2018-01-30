/*
** my_strcat.c for  in /home/da-pur_c/delivery/CPE/CPE_2016_matchstick
** 
** Made by Clem Da
** Login   <da-pur_c@epitech.net>
** 
** Started on  Tue Feb 14 09:33:16 2017 Clem Da
** Last update Tue Feb 14 09:33:31 2017 Clem Da
*/

#include "my.h"

char	*my_strcat(char *dest, char *src)
{
  int	i;
  int	lol;

  lol = 0;
  while (dest[lol])
    lol++;
  i = 0;
  while (src[i])
    {
      dest[lol + i] = src[i];
      i++;
    }
  dest[lol + i] = '\0';
  return (dest);
}
