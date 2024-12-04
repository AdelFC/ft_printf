NAME = libftprintf.a
SRC = ft_printf.c ft_printf_utils.c
CFLAGS = -Wall -Wextra -Werror
OBJS = $(SRC:.c=.o)

# Colors
DEF_COLOR = \033[0;39m
GRAY = \033[0;90m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE = \033[0;97m


all: $(NAME)

$(NAME): $(OBJS)
	@ar -rcs $(NAME) $(OBJS)
	@echo "$(GREEN)ft_printf compiled!$(DEF_COLOR)"

.c.o:
	@cc $(CFLAGS) -c $< -o $@

clean: 
	@rm -f $(OBJS)
	@echo "$(BLUE)ft_printf object files cleaned!$(DEF_COLOR)"

fclean: clean
	@rm -f $(NAME) libft.a
	@echo "$(CYAN)ft_printf executable files cleaned!$(DEF_COLOR)"

re: fclean
	@make all
	@echo "$(GREEN)Cleaned and rebuilt everything for ft_printf!$(DEF_COLOR)"

.PHONY: clean fclean re all