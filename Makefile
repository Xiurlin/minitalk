# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/03 08:06:37 by marvin            #+#    #+#              #
#    Updated: 2023/11/03 08:06:37 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SERVER = server
CLIENT = client

LIBFT_DIR	=		libft
LIBFT		=		$(LIBFT_DIR)/libft.a

SERVER_SRCS	=		src/server.c
SERVER_OBJS =		$(SERVER_SRCS:.c=.o)

CLIENT_SRCS = 		src/client.c
CLIENT_OBJS = 		$(CLIENT_SRCS:.c=.o)

CC			= 		gcc
CFLAGS		= 		-Wall -Wextra -Werror

all:		$(SERVER) $(CLIENT)

$(SERVER): $(SERVER_OBJS) $(LIBFT)
	$(CC) $(CFLAGS) $(SERVER_OBJS) $(LIBFT) -o server
$(CLIENT): $(CLIENT_OBJS) $(LIBFT)
	$(CC) $(CFLAGS) $(CLIENT_OBJS) $(LIBFT) -o client
$(LIBFT):
	make bonus -C $(LIBFT_DIR)

clean:
	make clean -C $(LIBFT_DIR)
	rm -rf $(SERVER_OBJS) $(CLIENT_OBJS)

fclean: clean
	rm -rf $(SERVER) $(CLIENT)
	make fclean -C $(LIBFT_DIR)

re: fclean all
