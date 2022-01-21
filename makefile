NAME		= push_swap
SRC_FILES	= main.c
UTIL_FILES	= push.c \
			push_helper.c \
			reverse_rotate.c \
			reverse_rotate_helper.c

C_FILES		= $(addprefix src/, $(SRC_FILES)) \
			$(addprefix utils/commands/, $(UTIL_FILES))
			
VPATH		= src: \
			utils/commands:

LIBFT		= lib/libft
FT_PRINTF	= lib/ft_printf

OBJ			= $(addprefix obj/,$(notdir $(C_FILES:.c=.o)))
CFLAGS		= -Wextra -Wall -Werror $(addprefix -I, \
			$(LIBFT) \
			$(FT_PRINTF)/src \
			src \
			utils/commands \
			)

all: $(NAME)

$(NAME): $(LIBFT)/libft.a $(FT_PRINTF)/libftprintf.a $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

$(LIBFT)/libft.a:
	make bonus -C $(LIBFT)

$(FT_PRINTF)/libftprintf.a:
	make -C $(FT_PRINTF)

obj/%.o: %.c
	@mkdir -p $(dir $@)
	$(CC) -c $(CFLAGS) -o $@ $^

clean:
		rm -rf obj
		make fclean -C $(LIBFT)
		make fclean -C $(FT_PRINTF)

fclean: clean
	rm -rf $(NAME)

re: clean all

# all:
# 	$(MAKE) -C lib/ft_printf
# 	$(MAKE) bonus -C lib/libft
# 	gcc -Wall -Werror -Wextra \
# 	src/main.c -I src \
# 	utils/commands/swap.c -I utils/commands \
# 	lib/ft_printf/libftprintf.a -I lib/ft_printf/src \
# 	lib/libft/libft.a -I lib/libft -o push_swap

# clean:
# 	$(MAKE) clean -C lib/ft_printf
# 	$(MAKE) clean -C lib/libft
# 	rm -rf push_swap

# fclean: clean
# 	$(MAKE) fclean -C lib/ft_printf
# 	$(MAKE) fclean -C lib/libft
# 	rm -rf push_swap

# re: clean all
