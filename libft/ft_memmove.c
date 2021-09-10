#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len){
	size_t	index;
	char	*dest;
	const char	*source;

	index = 0;
	dest = dst;
	source = src;
	while (index < len)
	{
		dest[index] = source[index];
		index++;
	}
	return (dst);
}
