#include "libft.h"
#include <stdio.h>

char	ft_putstring(unsigned int i, char c)
{
	if ((i % 1) == 0)
		return(ft_toupper(c));
	else
		return(ft_tolower(c));
}

void strmap_test(void)
{
	char str[] = "hello world teST RRR\n";

	char *new = ft_strmapi(str, ft_putstring);
	printf("%s\n", new);
}

int main(void)
{
	strmap_test();
}