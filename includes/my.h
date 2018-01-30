/*
** my.h for  in /home/da-pur_c/delivery/CPool_Day10/do-op/includes
** 
** Made by Clément Da-Purificacao
** Login   <da-pur_c@epitech.net>
** 
** Started on  Mon Oct 17 09:26:15 2016 Clément Da-Purificacao
** Last update Thu Feb 23 17:50:32 2017 Clem Da
*/

#ifndef MY_H_
# define MY_H_

#ifndef READ_SIZE
# define READ_SIZE (1)
#endif /*!READ_SIZE */

#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <stdarg.h>

typedef struct	s_oui
{
  int	i;
  int	j;
  int	k;
  int	l;
  int	m;
  char	**tab;
}		t_oui;

typedef struct s_return
{
  int	i;
  char	*s;
  char	*str;
}	       t_return;

int		my_count2(char **tab);
int		my_error2();
int		if_is_num(char *str);
char		*my_algo2(char **tab, int nb, int nb2, char *s);
char		*my_algo1_1(char *s, int nb, char **tab);
char		*my_strcat(char *dest, char *src);
int		count_max(char **tab, int i);
int		my_count(char **tab, int i);
int		my_verif(char **map);
int		my_error(char *str);
void		boucladin(char **tab, t_return *bonsoir,
			  int nb, int nb2);
char		**my_map2(char **tab, int nb, int nb2,
			  t_return *bonsoir);
char		**my_map(int nb, int nb2, t_return *bonsoir);
char		*get_next_line(int fd);
void		aff_tab(char **tab);
void		aff_tab2(char **tab);
int		my_getnbr(char *str);
int		my_printf(const char *format, ...);
void		my_putchar(char c);
void		my_putstr(char *str);
int		my_strlen(char *str);
int		my_strlen2(char *str);
void		my_nbr(int nb);
int		my_put_nbrbase(int nb, char *base);
void		my_binaire(int nb);
void		my_hexamin(int nb);
void		my_hexamaj(int nb);
void		my_octal(int nb);
void		my_ptr(int nb);
void		my_schelou(char *str);
char		*my_strdup(char *src);
void		my_char(int c);

#endif
