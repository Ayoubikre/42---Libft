# -*- Makfile -*-

cc = gcc

cflags = -Wall -Wextra -Werror

INCS	= includes

head = $(shell find . -name "*.h" -type f)

srcs = $(shell find . -name "*.c" -type f)

objc = $(srcs:.c=.o)

target = libft.a

all: $(target)

$(target): $(objc)
	ar rc $(target) $(objc)
	ranlib $(target)
#	ar t $(target)


%.o: %.c $(head)
	$(cc) $(cflags) -c -o $@ $<


clean:
	rm -rf $(objc)

fclean:
	rm -rf $(objc) $(target)

re:
	make fclean
	make all

.PHONY: all clean
