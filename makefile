

all:
	$(MAKE) bonus -C libft
	$(MAKE) -C ft_printf
	gcc -Wall -Werror -Wextra main.c \
	ft_printf/libftprintf.a -I ft_printf/src \
	libft/libft.a -I libft -o push_swap

clean:
	$(MAKE) clean -C libft
	$(MAKE) clean -C ft_printf
	rm -rf push_swap

fclean: clean
	$(MAKE) fclean -C libft
	$(MAKE) fclean -C ft_printf
	rm -rf push_swap

re: clean all
