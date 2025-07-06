NAME = libftprintf.a

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_strlen.c ft_putchar.c ft_print_str.c ft_printf.c ft_base_10.c ft_nosign.c \
	   ft_hex_may.c ft_hex_min.c ft_print_ptr.c

OBJS = $(SRCS:.c=.o)

INCLUDE = -I ./

RM = rm -f

DEPS = $(SRCS:.c=.d)

%.o: %.c
		${CC} ${FLAGS} -MMD $(INCLUDE) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

-include $(DEPS)

clean:
		$(RM) $(OBJS) $(DEPS)

fclean: clean
		$(RM) $(NAME)
re: fclean all

.PHONY: all clean fclean re