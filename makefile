NAME		= push_swap
SRC_FILES	= main.c
UTIL_FILES	= push.c \
			push_helper.c \
			reverse_rotate.c \
			reverse_rotate_helper.c \
			rotate.c \
			rotate_helper.c \
			swap.c \
			swap_helper.c \
			input_check.c \
			sorting_helpers.c \
			sort_len_2.c \
			sort_len_3.c \
			sort_len_5.c \
			sort_len_100.c \
			sort_len_500.c

C_FILES		= $(addprefix src/, $(SRC_FILES)) \
			$(addprefix utils/, $(UTIL_FILES))
			
VPATH		= src: \
			utils/commands: \
			utils/input_check: \
			utils/algorithm:

LIBFT		= lib/libft
FT_PRINTF	= lib/ft_printf

OBJ			= $(addprefix obj/,$(notdir $(C_FILES:.c=.o)))
CFLAGS		= -Wextra -Wall -Werror -g -fsanitize=address \
			$(addprefix -I , \
			$(LIBFT) \
			$(FT_PRINTF)/src \
			src \
			utils/commands \
			utils/input_check \
			utils/algorithm)

CCRED=\033[0;31m
CCGREEN=\033[0;32m
CCYELLOW=\033[0;33m
CCBLUE=\033[0;34m
CCEND=\033[0m

all: $(NAME)

$(NAME): $(LIBFT)/libft.a $(FT_PRINTF)/libftprintf.a $(OBJ)
	@echo "$(CCGREEN)make $(NAME)$(CCEND)"
	$(CC) $(CFLAGS) $^ -o $@

$(LIBFT)/libft.a: 
	@echo "$(CCGREEN)make libft$(CCEND)"
	make bonus -C $(LIBFT)
	@echo "$(CCGREEN)end libft$(CCEND)"

$(FT_PRINTF)/libftprintf.a:
	@echo "$(CCGREEN)make ft_printf$(CCEND)"
	make -C $(FT_PRINTF)
	@echo "$(CCGREEN)end ft_printf$(CCEND)"

obj/%.o: %.c 
	@mkdir -p $(dir $@) 
	$(CC) -c $(CFLAGS) -o $@ $^

clean:
		@echo "$(CCRED)remove objects$(CCEND)"
		rm -rf obj
		@echo "$(CCRED)clean libft$(CCEND)"
		make fclean -C $(LIBFT)
		@echo "$(CCRED)clean ft_printf$(CCEND)"
		make fclean -C $(FT_PRINTF)

fclean: clean
	@echo "$(CCRED)remove $(NAME)$(CCEND)"
	rm -rf $(NAME)

re: clean all

test: $(NAME)
	@python3 push_swap_visualizer/pyviz.py `ruby -e "puts (1..100).to_a.shuffle.join(' ')"`

test_500 : $(NAME)
	@python3 push_swap_visualizer/pyviz.py `ruby -e "puts (1..500).to_a.shuffle.join(' ')"`

# 100 >700
# 500 >1

# https://nathandumont.com/blog/automatically-detect-changes-in-header-files-in-a