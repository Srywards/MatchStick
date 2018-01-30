/*
** my_printf.c for  in /home/da-pur_c/delivery/PSU/PSU_2016_my_printf
** 
** Made by Clem Da
** Login   <da-pur_c@epitech.net>
** 
** Started on  Tue Nov  8 10:24:37 2016 Clem Da
** Last update Thu Nov 16 18:29:03 2017 clem
*/

#include "my.h"

void	my_charal(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      my_putchar(str[i]);
      i++;
    }
}

int	check(char c)
{
  int		i;
  char		*str;

  i = 0;
  str = my_strdup("csdioxXubpS");
  while (str[i])
    {
      if (c == str[i])
	return (0);
      i++;
    }
  return (1);
}

int	affichage(const char *format, int i)
{
  if (format[i] == '%' && format[i + 1] != '%')
    {
      my_putchar(format[i]);
      my_putchar(format[i + 1]);
      i++;
    }
  else
    {
      if (format[i] == '%' && format[i + 1] == '%')
	{
	  my_putchar(format[i]);
	  i++;
	}
      else
	my_putchar(format[i]);
    }
  return (i);
}

void	declara(void (*op[10])())
{
  op[0] = &my_char;
  op[1] = &my_charal;
  op[2] = &my_nbr;
  op[3] = &my_nbr;
  op[4] = &my_octal;
  op[5] = &my_hexamin;
  op[6] = &my_hexamaj;
  op[7] = &my_ptr;
  op[8] = &my_binaire;
  op[9] = &my_ptr;
  op[10] = &my_schelou;
}

int	my_printf(const char *format, ...)
{
  va_list	ap;
  int		i;
  int		j;
  char		*str;
  void		(*op[10])();

  declara(op);
  va_start(ap, format);
  i = 0;
  str = my_strdup("csdioxXubpS");
  while (format[i])
    {
      if (format[i] == '%' && (check(format[i + 1]) != 1))
	{
	  j = 0;
	  while (str[j] != format[i + 1] && str[j])
	    j++;
	  str[j]== 's' ? op[j](va_arg(ap, char*)) : op[j](va_arg(ap, int));
	  i++;
	}
      else
	i = affichage(format, i);
      i++;
    }
  va_end(ap);
}
