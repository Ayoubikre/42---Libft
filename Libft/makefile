cc = gcc

cflags= -Wall -Wextra -Werror

src = $(shell find . -name "*.c" -type f)

objc = $(src:.c=.o)

name = t

all: $(name) clean

$(name): $(objc)
	$(cc) $(cflags) -o $(name) $(objc)

%.o: %.c
	$(cc) $(cflags) -c -o $@ $<

clean:
	@rm -rf $(objc)

fclean:
	@rm -rf $(name)

re: fclean all 
