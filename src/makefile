# cc = gcc

# cflags= -Wall -Wextra -Werror

# src = $(shell find . -name "*.c" -type f)

# objc = $(src:.c=.o)

# name = t

# all: $(name) clean

# $(name): $(objc)
# 	$(cc) $(cflags) -o $(name) $(objc)

# %.o: %.c
# 	$(cc) $(cflags) -c -o $@ $<

# clean:
# 	@rm -rf $(objc)

# fclean:
# 	@rm -rf $(name)

# re: fclean all 


# ----------------------------------------------


CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = $(shell find . -name "*.c" -type f)
OBJS = $(SRCS:.c=.o)

NAME = libft.a

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
