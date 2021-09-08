#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		index;
	char		*dst_ptr;
	const char	*src_ptr;

	index = 0;
	dst_ptr = dst;
	src_ptr = src;
	while (index < n)
	{
		dst_ptr[index] = src_ptr[index];
		index++;
	}
	return (dst);
}
