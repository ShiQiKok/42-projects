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

	printf("toupper: (A, _, z)\n");
	printf("%d\n", toupper('A'));
	printf("%d\n", ft_toupper('A'));
	printf("%d\n", toupper('_'));
	printf("%d\n", ft_toupper('_'));
	printf("%d\n", toupper('z'));
	printf("%d\n\n", ft_toupper('z'));

	printf("tolower: (A, _, z)\n");
	printf("%d\n", tolower('A'));
	printf("%d\n", ft_tolower('A'));
	printf("%d\n", tolower('_'));
	printf("%d\n", ft_tolower('_'));
	printf("%d\n", tolower('z'));
	printf("%d\n\n", ft_tolower('z'));

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

	char	dest1[] = "destination";
	char	dest2[] = "destination";
	char	src1[] = "copy";
	char	src2[] = "copy";

	printf("memcpy ('destination', 'destination' ,4):\n");
	ptr = memcpy(dest1, dest1, 4);
	printf("%s\n", ptr);
	ptr = ft_memcpy(dest2, dest2, 4);
	printf("%s\n", ptr);

	printf("memcpy ('destination', 'copy' ,4):\n");
	ptr = memcpy(dest1, src1, 4);
	printf("%s\n", ptr);
	ptr = ft_memcpy(dest2, src2, 4);
	printf("%s\n\n", ptr);

	char	dest3[] = "destination";
	char	dest4[] = "destination";
	char	src3[] = "copy";
	char	src4[] = "copy";

	printf("memcpy ('destination', 'destination' ,4):\n");
	ptr = memmove(dest3, dest3, 4);
	printf("%s\n", ptr);
	ptr = ft_memmove(dest4, dest4, 4);
	printf("%s\n", ptr);

	printf("('destination', 'copy', 4):\n");
	ptr = memmove(dest3, src3, 4);
	printf("%s\n", ptr);
	ptr = ft_memmove(dest4, src4, 4);
	printf("%s\n\n", ptr);

	printf("strchr('helllowwwwasd', l):\n");
	char	test5[] = "helllowwwwasd";

	ptr = strchr(test5, 'l');
	printf("%s\n", ptr);
	ptr = ft_strchr(test5, 'l');
	printf("%s\n\n", ptr);

	printf("strchr('helllowwwwasd', z):\n");
	ptr = strchr(test5, 'z');
	printf("%s\n", ptr);
	ptr = ft_strchr(test5, 'z');
	printf("%s\n\n", ptr);

	printf("strchr('helllowwwwasd', 0):\n");
	ptr = strchr(test5, 0);
	printf("%s\n", ptr);
	ptr = ft_strchr(test5, 0);
	printf("%s\n\n", ptr);


	printf("strrchr('helllowwwwasd', l):\n");
	ptr = strrchr(test5, 'l');
	printf("%s\n", ptr);
	ptr = ft_strrchr(test5, 'l');
	printf("%s\n\n", ptr);

	printf("strrchr('helllowwwwasd', z):\n");
	ptr = strrchr(test5, 'z');
	printf("%s\n", ptr);
	ptr = ft_strrchr(test5, 'z');
	printf("%s\n\n", ptr);

	printf("strrchr('helllowwwwasd', 0):\n");
	ptr = strchr(test5, 0);
	printf("%s\n", ptr);
	ptr = ft_strrchr(test5, 0);
	printf("%s\n\n", ptr);


	printf("strncmp('This is a string yeay', 'This is 1 string yeay', [0, 10, 100]):\n");
	char	test6[] = "This is a string yeay";
	char	test7[] = "This is 1 string yeay";
	printf("%d\n", strncmp(test6, test7, 0));
	printf("%d\n", ft_strncmp(test6, test7, 0));

	printf("%d\n", strncmp(test6, test7, 10));
	printf("%d\n", ft_strncmp(test6, test7, 10));

	printf("%d\n", strncmp(test6, test7, 100));
	printf("%d\n", ft_strncmp(test6, test7, 100));
	return (0);
}
