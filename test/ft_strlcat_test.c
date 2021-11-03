#include "libft.h"
#include <stdio.h>

int main()
{
    char dest[] = "kust";
    char src[] = "ik i dustik doma sidyat";
    size_t result;
    size_t size = 150;
    char buf[size];

    strcpy(buf, dest);
    result = strlcat(buf, src, size);
    printf("%s\n", buf);
    printf("Result of ft_strlcat: %zu\n", result);
    if (result > size - 1)
    {
        printf("String truncated\n");
    }
    else
    {
        printf("Full string copied\n");
    }
    return (0);
}