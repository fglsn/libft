#include "libft.h"
#include <stdio.h> 


int main(void)
{
	int i = 0;
	char	*s = "0 0 0 0 0 0 0 0 0";
	char	**result = ft_strsplit(s, ' ');
	while (result[i])
	{
		printf("%s\n", result[i]);
		i++;
	}
	return (0);
}


