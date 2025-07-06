NAME = libft.a

BONUS = .bonus

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_strlen.c ft_strchr.c ft_strrchr.c ft_memset.c ft_bzero.c ft_memcpy.c ft_strncmp.c ft_memchr.c ft_memmove.c ft_strlcpy.c ft_memcmp.c ft_strlcat.c ft_atoi.c ft_strnstr.c

OBJS = $(SRCS:.c=.o)

OBJSBONUS = $(SRCSBONUS:.c=.o)

INCLUDE = -I ./

RM = rm -f

%.o: %.c
	${CC} ${CFLAGS} -MMD $(INCLUDE) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS) $(OBJSBONUS) $(DEPS) $(DEPS_BONUS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
