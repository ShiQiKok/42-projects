#include "libft.h"
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	index;
	char	*ptr;

	index = 0;
	ptr = b;
	while (index < len)
		ptr[index++] = c;
	return (b);
}
