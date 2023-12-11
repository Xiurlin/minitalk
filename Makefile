# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: drestrep <drestrep@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/03 08:06:37 by drestrep          #+#    #+#              #
#    Updated: 2023/11/03 08:06:37 by drestrep         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SERVER 		=	server
CLIENT 		=	client

CC			= 	gcc
CFLAGS		= 	-Wall -Wextra -Werror

SRC_DIR		=	src
OBJ_DIR		=	obj

LIBFT_DIR 	=	libft
LIBFT		=	$(LIBFT_DIR)/libft.a

SERVER_SRCS	=	$(SRC_DIR)/server.c
CLIENT_SRCS	=	$(SRC_DIR)/client.c

SERVER_OBJS =	$(OBJ_DIR)/server.o
CLIENT_OBJS =	$(OBJ_DIR)/client.o

all:			$(SERVER) $(CLIENT)

$(SERVER):		$(SERVER_OBJS) $(LIBFT) | $(OBJ_DIR)
				@$(CC) $(CFLAGS) $(SERVER_OBJS) $(LIBFT) -o server
				@echo " "
				@echo "🗣🗣     🗣🗣   🗣🗣   🗣🗣     🗣🗣   🗣🗣   🗣🗣🗣🗣🗣🗣      🗣🗣🗣🗣       🗣🗣     🗣🗣   🗣"
				@echo "🗣🗣🗣   🗣🗣🗣   🗣🗣   🗣🗣🗣    🗣🗣   🗣🗣     🗣🗣       🗣🗣  🗣🗣      🗣🗣     🗣🗣  🗣"
				@echo "🗣🗣  🗣  🗣🗣   🗣🗣   🗣🗣  🗣  🗣🗣   🗣🗣     🗣🗣      🗣🗣🗣🗣🗣🗣🗣🗣     🗣🗣     🗣🗣 🗣"
				@echo "🗣🗣     🗣🗣   🗣🗣   🗣🗣    🗣🗣🗣   🗣🗣     🗣🗣     🗣🗣      🗣🗣    🗣🗣     🗣🗣  🗣"
				@echo "🗣🗣     🗣🗣   🗣🗣   🗣🗣     🗣🗣   🗣🗣     🗣🗣    🗣🗣        🗣🗣   🗣🗣🗣🗣   🗣🗣   🗣"
				@echo " "
$(CLIENT):		$(CLIENT_OBJS) $(LIBFT) | $(OBJ_DIR)
				@$(CC) $(CFLAGS) $(CLIENT_OBJS) $(LIBFT) -o client

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
				@$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT):
				@make -C $(LIBFT_DIR)

$(OBJ_DIR):
				@mkdir -p $@

clean:
				@make fclean -C $(LIBFT_DIR)
				@rm -rf $(OBJ_DIR)

fclean:			clean
				@rm -rf $(SERVER) $(CLIENT)

re:				fclean all
