# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abrunjes <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/22 17:01:36 by abrunjes          #+#    #+#              #
#    Updated: 2025/10/25 15:50:15 by abrunjes         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
AR = ar rsc

CFILRS = test.c \\sort this
CFLAGS = - Wall -Wextra -Werror 
OFILES = $(SRCS:.c=.0)

RM = rm -f
CC = cc

all: $(NAME) clean

$(NAME):$(OFILES)

clean:
	rm - f $(OFILES)
fclean: 
	rm - f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re

clean

fclean

re

