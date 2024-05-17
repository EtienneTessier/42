# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: etessier <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/25 19:15:50 by etessier          #+#    #+#              #
#    Updated: 2024/02/25 19:24:11 by etessier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

INCLUDES    = includes/rush02.h

FILES    = main.c check_input.c conv_number.c conv_units.c dict.c free.c init_params.c prints.c tools.c

SRCPATH    = $(DIRPATH)src/

SRC		= $(addprefix $(SRCPATH), $(FILES))

NAME	= rush-02

OBJ		= $(SRC:.c=.o)

CC		=    cc

CFLAGS	= -Wall -Werror -Wextra 

all : $(NAME)

$(NAME) : $(OBJ) $(INCLUDES)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
clean:
	rm $(OBJ)

fclean:
	rm $(NAME) $(OBJ)

re: fclean all

.PHONY: clean fclean re
