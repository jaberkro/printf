# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: jaberkro <jaberkro@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2021/11/28 17:35:10 by jaberkro      #+#    #+#                  #
#    Updated: 2021/12/09 16:57:50 by jaberkro      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

INC = ft_printf.h 
#./libft/libft.h

FLAGS = -Wall -Wextra -Werror

SRC = ft_putunbr_fd.c ft_puthex_fd.c ft_printf.c

OBJ = $(SRC:.c=.o)

LIBFT_DIR = libft/

LIBFT = libft/libft.a

# COLORS
PINK	= \x1b[35m
BLUE	= \x1b[34m
YELLOW	= \x1b[33m
GREEN	= \x1b[32m
RED		= \x1b[31m
RESET	= \x1b[0m

all: $(NAME)

$(NAME): $(LIBFT) $(OBJ)
	cp $(LIBFT) ./$(NAME)
	ar -crs $(NAME) $(OBJ)
	@echo "$(RED)Done $(GREEN)COM$(YELLOW)PI$(BLUE)LING $(PINK)PRINTF$(RESET) :)"

%.o: %.c	#$(NAME:%.a=%.h)
	gcc -c $(FLAGS) -I $(INC) -o $@ $<

$(LIBFT):
	$(MAKE) bonus -C $(LIBFT_DIR)

clean:
	rm -f $(OBJ)
	$(MAKE) fclean -C $(LIBFT_DIR)
	@echo "$(RED)DONE $(GREEN)CLEANING$(YELLOW) PRINTF$(PINK) :)$(RESET)"

fclean: clean
	rm -f $(NAME)
	@echo "$(RED)Done $(GREEN)FANCY CLEANING$(YELLOW) PRINTF$(PINK) :)$(RESET)"

re: fclean all
	@echo "$(RED)Done $(PINK)RE$(GREEN)COM$(YELLOW)PI$(BLUE)LING $(PINK)PRINTF$(RESET) :)"

.PHONY: all clean fclean re