/*
** my_strdup.c for strdup in /home/da-pur_c/delivery/CPool_Day08
** 
** Made by Clément Da-Purificacao
** Login   <da-pur_c@epitech.net>
** 
** Started on  Wed Oct 12 14:59:11 2016 Clément Da-Purificacao
** Last update Thu Nov 16 18:29:44 2017 clem
*/

#include "my.h"

int	my_strlen1(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}

char	*my_strcpy1(char *dest, char *src)
{
  int	i;

  i = 0;
  while (src[i])
    {
      dest[i] = src[i];
      i++;
    }
  dest[i] = '\0';
  return (dest);
}

char	*my_strdup(char *src)
{
  char	*tmp = NULL;

  if (src != NULL)
    {
      if ((tmp = malloc(sizeof(char) * my_strlen1(src))) == NULL)
	return (NULL);
      return (tmp = my_strcpy1(tmp, src));
    }
  return (tmp);
}
