#* ************************************************************************** *#
#*                                                                            *#
#*                                                        :::      ::::::::   *#
#*   Makefile                                           :+:      :+:    :+:   *#
#*                                                    +:+ +:+         +:+     *#
#*   By:  <HimuraXp>                                +#+  +:+       +#+        *#
#*                                                +#+#+#+#+#+   +#+           *#
#*   Created: 2015/08/04 17:42:19 by                   #+#    #+#             *#
#*   Updated: 2015/08/07 09:29:23 by                  ###   ########.fr       *#
#*                                                                            *#
#* ************************************************************************** *#

NAME = who_is_it

SRC = ./srcs/*.c

OBJ = ./srcs/*.o

INC = ./includes/

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	@gcc $(FLAGS) -I$(INC) $(SRC) -o $(NAME)
	@echo "Compilation terminé"

clean:
	@/bin/rm -f ./~* ./*~ ./includes/*.gch ./*.o
	@echo "Nettoyage fichiers temporaire"

fclean: clean
	@/bin/rm -f $(NAME)
	@echo "Suppression temporaire et executable"

re: fclean all
	@echo "Nettoyage et recompilation"

