CC = gcc
FLAGS = -Wall -Wextra -Werror

all:
	$(CC) $(FLAGS) *.c *.h

clean:
	-rm -f

fclean: clean
	rm -rf *.gch *.out

re: fclean all