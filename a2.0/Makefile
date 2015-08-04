#* ************************************************************************** *#
#*                                                                            *#
#*                                                        :::      ::::::::   *#
#*   Makefile                                           :+:      :+:    :+:   *#
#*                                                    +:+ +:+         +:+     *#
#*   By:  <HimuraXp>                                +#+  +:+       +#+        *#
#*                                                +#+#+#+#+#+   +#+           *#
#*   Created: 2015/08/04 17:42:19 by                   #+#    #+#             *#
#*   Updated: 2015/08/04 19:16:36 by                  ###   ########.fr       *#
#*                                                                            *#
#* ************************************************************************** *#

NAME = who_is_it

SRC = ./srcs/*.c

OBJ = *.o

INC = ./includes/

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(SRC) &&
	gcc -o $(NAME) $(OBJ) -I$(INC)

clean:
	/bin/rm -f ./~* ./*~ ./includes/*.gch

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

