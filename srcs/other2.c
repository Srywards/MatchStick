/*
** other2.c for  in /home/da-pur_c/delivery/CPE/CPE_2016_matchstick
** 
** Made by Clem Da
** Login   <da-pur_c@epitech.net>
** 
** Started on  Fri Feb 17 00:39:23 2017 Clem Da
** Last update Wed Feb 22 14:46:17 2017 Clem Da
*/

#include "my.h"

int	if_is_num(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      if (str[i] < '0' || str[i] > '9')
	return (1);
      i++;
    }
  return (0);
}

int	my_error2()
{
  my_printf("Usage : ./matchstick [number] [matches max]\n");
  my_printf("[number] must be between 1 and 100\n");
  my_printf("[matches max] must be more or equal than 1\n");
  return (84);
}

char	*my_algo2(char **tab, int nb, int nb2, char *s)
{
  while ((s = get_next_line(0)))
    {
      if (if_is_num(s) == 1 || my_getnbr(s) < 1 || my_getnbr(s) > nb ||
	  my_count(tab, my_getnbr(s)) != 0)
	{
	  if (if_is_num(s) == 1)
	    my_printf("Error: invalid input (positive number \
expected)\nLine : ");
	  else
             my_printf("Error: this line is out of range\nLine : ");
	}
      else
	return (s);
    }
}

char	*my_algo1_1(char *s, int nb, char **tab)
{
  my_printf("Your turn :\nLine: ");
  while ((s = get_next_line(0)))
    {
      if (if_is_num(s) == 1 || my_getnbr(s) < 1 || my_getnbr(s) > nb ||
	  my_count(tab, my_getnbr(s)) != 0)
	{
	  if (if_is_num(s) == 1)
	    my_printf("Error: invalid input (positive number \
expected)\nLine : ");
	  else
	    my_printf("Error: this line is out of range\nLine : ");
	}
      else
	return (s);
    }
}
