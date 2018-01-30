/*
** get_next_line.c for  in /home/da-pur_c/delivery/CPE/CPE_2016_getnextline
** 
** Made by Clem Da
** Login   <da-pur_c@epitech.net>
** 
** Started on  Mon Jan  2 09:22:16 2017 Clem Da
** Last update Tue Feb 14 09:33:40 2017 Clem Da
*/

#include "my.h"

char            *my_realloc(char *old, int size)
{
  int           i;
  char          *new;
  int		lol;

  lol = 0;
  while (old[lol])
    lol++;
  i = 0;
  if ((new = malloc(sizeof(*new) * (lol + size))) == NULL)
    return (NULL);
  while (old[i])
    {
      new[i] = old[i];
      i++;
    }
  free(old);
  new[i] = '\0';
  return (new);
}

char	*failadin(char *tmp, char *buffer, int ret)
{
  int		i;
  char		*oui;
  static char	*lel;

  i = 0;
  oui = malloc(sizeof(char) * ret + 1);
  while (buffer[i] != '\n')
    {
      oui[i] = buffer[i];
      i++;
    }
  lel = malloc(sizeof(char) * ret);
  while (buffer[i] != '\0')
    {
      *lel++ = buffer[i];
      i++;
    }
  my_printf("%s", lel);
  tmp = my_realloc(tmp, i);
  tmp = my_strcat(tmp, oui);
  tmp = my_strcat(tmp, "\0");
  return (tmp);
}

char	*fail2(char *tmp, char *buffer, int poo, int prout)
{
  static int		j;
  int			i;
  int			lol;

  lol = 0;
  while (buffer[lol])
    lol++;
  i = 0;
  j = prout;
  if (poo > 0)
    tmp = my_realloc(tmp, lol);
  while (buffer[i])
    {
      tmp[j] = buffer[i];
      i++;
      j++;
    }
  return (tmp);
}

int	fail(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      if (str[i] == '\n')
	return (1);
      i++;
    }
  return (0);
}

char	*get_next_line(const int fd)
{
  char			*buffer;
  static char		*tmp;
  int			ret;
  int			poo = 0;
  static int		i;

  tmp = malloc(sizeof(char) * READ_SIZE + 1);
  tmp[0] = '\0';
  while (1)
    {
      buffer = malloc(sizeof(char) * READ_SIZE + 1);
      if ((ret = read(fd, buffer, READ_SIZE)) <= 0)
	return (NULL);
      if (fail(buffer) == 0)
	{
	  tmp = fail2(tmp, buffer, poo, i);
	  i = i + ret;
	  poo++;
	}
      else
	return (i = 0, tmp = failadin(tmp, buffer, ret));
    }
  return (tmp);
}
