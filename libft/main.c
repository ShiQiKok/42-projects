#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int	main(void)
{
	printf("isalpha:\n");
	printf("%lu\n", isalpha("hello"));
	printf("%lu\n\n", ft_isalpha("hello"));



	printf("strlen:\n");
	printf("%lu\n", strlen("hello"));
	printf("%lu\n\n", ft_strlen("hello"));
	return (0);
}