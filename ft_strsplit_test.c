#include "libft.h"
#include <stdio.h> 

int main(void)
{
	const char s[] = "hello world of pain";
	char **result;
	int i = 0;
	result = ft_strsplit(s, ' ');
	while (result[i])
	{
		printf("%s\n", result[i]);
		i++;
	}
	return (0);
}