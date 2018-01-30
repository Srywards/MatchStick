/*
** my_strlen.c for  in /home/da-pur_c/delivery/PSU/PSU_2016_my_printf/printf/srcs
** 
** Made by Clem Da
** Login   <da-pur_c@epitech.net>
** 
** Started on  Thu Nov 17 17:22:56 2016 Clem Da
** Last update Tue Feb 21 18:18:21 2017 Clem Da
*/

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}
