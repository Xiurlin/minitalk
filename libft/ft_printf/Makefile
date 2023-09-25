# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: drestrep <drestrep@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/07 07:07:13 by drestrep          #+#    #+#              #
#    Updated: 2023/06/29 03:15:24 by drestrep         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS		=	ft_printf.c			\
				ft_putchar.c		\
				ft_putstr.c			\
				ft_putptr.c			\
				ft_putnbr.c			\
				ft_unsigned_int.c	\
				ft_hexadecimal.c	\

OBJS		=	$(SRCS:.c=.o)


CC			=	gcc
RM			= 	rm -f
CFLAGS		= 	-Wall -Wextra -Werror

NAME		= 	libftprintf.a

all:			$(NAME)

$(NAME):		$(OBJS)
				@ar rcs $(NAME) $(OBJS)

clean:
				@$(RM) $(OBJS) $(BONUS_OBJS)

fclean:			clean
				@$(RM) $(NAME)

re:				fclean all

.PHONY:			clean
