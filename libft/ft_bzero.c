#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	index;
	char	*ptr;

	index = 0;
	ptr = s;
	while (index < n)
		ptr[index++] = '0';
}
