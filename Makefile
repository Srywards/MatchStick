##
## Makefile for  in /home/da-pur_c/delivery/CPool_Day10/lib/my
## 
## Made by Clément Da-Purificacao
## Login   <da-pur_c@epitech.net>
## 
## Started on  Fri Oct 14 09:22:53 2016 Clément Da-Purificacao
## Last update Thu Feb 23 19:41:03 2017 Clem Da
##

NAME=	matchstick

SRC=	srcs/matchstick.c	\
	srcs/my_printf.c	\
	srcs/my_putstr.c	\
	srcs/my_put_nbr.c	\
	srcs/my_put_nbrbase.c	\
	srcs/my_strlen.c	\
	srcs/my_strlen2.c	\
	srcs/my_putbinaire.c	\
	srcs/my_puthexamin.c	\
	srcs/my_puthexamaj.c	\
	srcs/my_putoctal.c	\
	srcs/my_putu.c		\
	srcs/my_schelou.c	\
	srcs/my_strdup.c	\
	srcs/my_char.c		\
	srcs/my_getnbr.c	\
	srcs/aff_tab.c		\
	srcs/get_next_line.c	\
	srcs/create_map.c	\
	srcs/other.c		\
	srcs/my_strcat.c	\
	srcs/other2.c

INC=	-I./includes

OBJ=	$(SRC:.c=.o)

CC=	gcc

CFLAGS=	$(INC) $(LIB)

RM=	rm -rf

all:	$(NAME)

$(NAME):$(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(CFLAGS)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all
