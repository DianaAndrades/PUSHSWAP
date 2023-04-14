##
## EPITECH PROJECT, 2022
## BS_MYLS_MAKEFILE
## File description:
## makefile of the bs_myls
##

SRC		=	$(wildcard lib/src/*.c)	\
			src/linkedlist_library/create_linked_list.c	\
			src/linkedlist_library/destroy_list.c	\
			src/linkedlist_library/add_beginning.c	\
			src/linkedlist_library/nodes_counter.c	\
			src/linkedlist_library/my_print_linkedlist.c \
			src/main.c	\
			src/minor_first_pos/mv_firstpos_even_nb.c	\
			src/minor_first_pos/mv_firstpos_odd_nb.c	\
			src/error_handling.c	\
			src/push_swap.c	\
			src/rra_ra.c	\
			src/minor_nbr.c	\
			src/step1.c	\
			src/ini_getinfo.c	\
			src/algorithm.c	\
			src/pb_pa.c	\
			src/no_sort_needed.c	\


OBJ		= 	$(SRC:.c=.o)

NAME	=	push_swap

CFLAGS	= 	-W -Wextra -Wall -I./include/ -I./lib/include/

all:	$(NAME)

$(NAME): $(OBJ)
		gcc -o $(NAME) $(SRC) $(CFLAGS) -g3

clean:
		rm -rf $(OBJ)
		rm -f *~ *#

fclean: clean
		rm -rf $(NAME)

re: fclean all
