#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int	main(void)
{
	printf("isalpha: (A, _, z)\n");
	printf("%d\n", isalpha('A'));
	printf("%d\n", ft_isalpha('A'));
	printf("%d\n", isalpha('_'));
	printf("%d\n", ft_isalpha('_'));
	printf("%d\n", isalpha('z'));
	printf("%d\n\n", ft_isalpha('z'));

	printf("isdigit: ('0', 3, '9')\n");
	printf("%d\n", isdigit('0'));
	printf("%d\n", ft_isdigit('0'));
	printf("%d\n", isdigit(3));
	printf("%d\n", ft_isdigit(3));
	printf("%d\n", isdigit('9'));
	printf("%d\n\n", ft_isdigit('9'));

	printf("isalnum: (s, *, 5)\n");
	printf("%d\n", isalnum('s'));
	printf("%d\n", ft_isalnum('s'));
	printf("%d\n", isalnum('*'));
	printf("%d\n", ft_isalnum('*'));
	printf("%d\n", isalnum('5'));
	printf("%d\n\n", ft_isalnum('5'));

	printf("isascii: (a, 0, 128)\n");
	printf("%d\n", isascii('s'));
	printf("%d\n", ft_isascii('s'));
	printf("%d\n", isascii('*'));
	printf("%d\n", ft_isascii('*'));
	printf("%d\n", isascii(128));
	printf("%d\n\n", ft_isascii(128));

	printf("isprint: (0, 32, 126)\n");
	printf("%d\n", isascii('s'));
	printf("%d\n", ft_isascii('s'));
	printf("%d\n", isascii('*'));
	printf("%d\n", ft_isascii('*'));
	printf("%d\n", isascii(128));
	printf("%d\n\n", ft_isascii(128));

	printf("strlen (hello):\n");
	printf("%lu\n", strlen("hello"));
	printf("%lu\n\n", ft_strlen("hello"));

	printf("memset ('This is a string yeay', a, 5):\n");
	char	test1[] = "This is a string yeay";
	char	test2[] = "This is a string yeay";
	char	*ptr;

	ptr = memset(&test1, 'a', 5);
	printf("%s\n", ptr);
	ptr = ft_memset(&test2, 'a', 5);
	printf("%s\n\n", ptr);

	printf("bzero ('This is a string yeay', 5):\n");
	char	test3[] = "This is a string yeay";
	char	test4[] = "This is a string yeay";
	bzero(test3, 5);
	printf("%s\n", test3);
	ft_bzero(&test4, 5);
	printf("%s\n\n", test4);

	printf("memcpy ('destination', 'copy' ,4):\n");
	char	dest1[] = "destination";
	char	dest2[] = "destination";
	char	src1[] = "copy";
	char	src2[] = "copy";

	ptr = memcpy(dest1, src1, 4);
	printf("%s\n", ptr);
	ptr = ft_memcpy(dest2, src2, 4);
	printf("%s\n", ptr);
	return (0);
}
