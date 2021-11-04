#include <stdio.h>
#include "libft.h"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Provide numeric string.\n");
		return (1);
	}
	char *n = "+\t\v\f\r\n \f1234";
	char *s1 = argv[1];
	printf("%d\n", atoi(s1));
	printf("%d\n", ft_atoi(s1));
	printf("%d\n", atoi(n));
	printf("%d\n", ft_atoi(n));
	return (0);
}

//-9223372036854775808
//9223372036854775807

//-2147483648

//-9999999999999999999999999 
//99999999999999999999999999