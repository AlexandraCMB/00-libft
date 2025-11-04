# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abrunjes <abrunjes@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/22 17:01:36 by abrunjes          #+#    #+#              #
#    Updated: 2025/11/03 18:31:09 by abrunjes         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

#compiler and flags 
CC = cc
CFLAGS = -Wall -Wextra -Werror 
AR = ar rcs
RM = rm -f
INCLUDE = -I.
 
#source files  NTS - fix *.c in sources at end
SRCS = $(wildcard *.c) 
OBJS = $(SRCS:.c=.o)

#compile object files > $< INGREDIENT $@ PRODUCT
%.o:%.c
	${CC} ${CFLAGS} ${INCLUDE} -c $< -o $@

#main build rule
all: $(NAME)

#create library  
$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

#clear object files
clean: 
	$(RM) $(OBJS)

#clean objects AND library 
fclean: clean 
	 $(RM) $(NAME)

#rebuild!
re: fclean all

.PHONY: all clean fclean re
# **************************************************************************** #
