NAME = libft.a

BONUS = .bonus

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_toupper.c ft_tolower.c ft_strlen.c ft_strchr.c ft_strrchr.c \
	ft_memset.c ft_bzero.c ft_memcpy.c ft_strncmp.c ft_memchr.c \
	ft_memmove.c ft_strlcpy.c ft_memcmp.c ft_strlcat.c ft_atoi.c \
	ft_strnstr.c ft_calloc.c ft_strdup.c ft_strjoin.c ft_substr.c \
	ft_strtrim.c ft_strmapi.c ft_putchar_fd.c ft_putendl_fd.c \
	ft_putstr_fd.c ft_putnbr_fd.c ft_striteri.c ft_split.c ft_itoa.c

SRCSBONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
			ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
			ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c 

OBJS = $(SRCS:.c=.o)

OBJSBONUS = $(SRCSBONUS:.c=.o)

INCLUDE = -I ./

RM = rm -f

DEPS = $(SRCS:.c=.d)

DEPS_BONUS = $(SRCSBONUS:.c=.d)

%.o: %.c
	${CC} ${CFLAGS} -MMD $(INCLUDE) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

-include $(DEPS)

bonus: $(BONUS)

$(BONUS) : $(OBJS) $(OBJSBONUS)
	ar -rcs $(NAME) $(OBJS) $(OBJSBONUS)
	touch $@

-include $(DEPS_BONUS)

clean:
	$(RM) $(OBJS) $(OBJSBONUS) $(DEPS) $(DEPS_BONUS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
