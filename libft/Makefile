# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: drestrep <drestrep@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/03 00:07:08 by drestrep          #+#    #+#              #
#    Updated: 2023/06/29 03:22:34 by drestrep         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=	ft_isalnum.c		\
					ft_isalpha.c		\
					ft_isascii.c		\
					ft_isdigit.c		\
					ft_isprint.c		\
					ft_memcpy.c			\
					ft_memset.c			\
					ft_strchr.c			\
					ft_strlen.c			\
					ft_strncmp.c		\
					ft_strrchr.c		\
					ft_tolower.c		\
					ft_toupper.c		\
					ft_bzero.c			\
					ft_memmove.c		\
					ft_strlcpy.c		\
					ft_memchr.c			\
					ft_memcmp.c			\
					ft_strlcat.c		\
					ft_strnstr.c		\
					ft_atoi.c			\
					ft_calloc.c			\
					ft_strdup.c			\
					ft_substr.c			\
					ft_strjoin.c		\
					ft_strtrim.c		\
					ft_split.c			\
					ft_itoa.c			\
					ft_strmapi.c		\
					ft_striteri.c		\
					ft_putchar_fd.c		\
					ft_putstr_fd.c		\
					ft_putendl_fd.c		\
					ft_putnbr_fd.c		\

BONUS			=	ft_lstnew_bonus.c			\
					ft_lstadd_front_bonus.c		\
					ft_lstsize_bonus.c			\
					ft_lstlast_bonus.c			\
					ft_lstadd_back_bonus.c		\
					ft_lstdelone_bonus.c		\
					ft_lstclear_bonus.c			\
					ft_lstiter_bonus.c			\
					ft_lstmap_bonus.c			\

OBJS			= $(SRCS:.c=.o)

BONUS_OBJS		= $(BONUS:.c=.o)

FT_PRINTF_DIR	= ft_printf
FT_PRINTF		= $(FT_PRINTF_DIR)/ft_printf.a

CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.

NAME			= libft.a

all:			$(NAME)

$(NAME):		$(OBJS) $(FT_PRINTF)
				@ar rcs $(NAME) $(OBJS)

$(OBJS):		$(SRCS)
				@$(CC) $(CFLAGS) -c $^

bonus:			$(OBJS) $(BONUS_OBJS)
				@ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)
				@echo " "
				@echo "📖📖      📖📖   📖📖📖📖     📖📖📖📖  📖📖📖📖📖"
				@echo "📖📖      📖📖   📖📖  📖📖   📖📖         📖📖"
				@echo "📖📖      📖📖   📖📖📖📖     📖📖📖📖     📖📖"
				@echo "📖📖      📖📖   📖📖  📖📖   📖📖         📖📖"
				@echo "📖📖📖📖  📖📖   📖📖📖📖     📖📖         📖📖"
				@echo " "

$(BONUS_OBJS):	$(BONUS)
				@$(CC) $(CFLAGS) -c $^

$(FT_PRINTF):
				@make -C $(FT_PRINTF_DIR)

clean:
				@$(RM) $(OBJS) $(BONUS_OBJS)
				@echo " "
				@echo "🧹🧹🧹🧹  🧹🧹      🧹🧹🧹🧹     🧹🧹     🧹🧹    🧹🧹  🧹🧹🧹🧹  🧹🧹🧹🧹"
				@echo "🧹🧹      🧹🧹      🧹🧹      🧹🧹  🧹🧹  🧹🧹🧹  🧹🧹  🧹🧹      🧹🧹   🧹  "
				@echo "🧹🧹      🧹🧹      🧹🧹🧹🧹  🧹🧹🧹🧹🧹  🧹🧹 🧹 🧹🧹  🧹🧹🧹🧹  🧹🧹  🧹🧹"
				@echo "🧹🧹      🧹🧹      🧹🧹      🧹🧹  🧹🧹  🧹🧹  🧹🧹🧹  🧹🧹      🧹🧹  🧹🧹   " 
				@echo "🧹🧹🧹🧹  🧹🧹🧹🧹  🧹🧹🧹🧹  🧹🧹  🧹🧹  🧹🧹    🧹🧹  🧹🧹🧹🧹  🧹🧹🧹🧹   "
				@echo " "

fclean:			clean
				@$(RM) $(NAME)
				@make fclean -C $(FT_PRINTF_DIR)

re:				fclean $(NAME)

.PHONY:			all clean fclean re bonus
