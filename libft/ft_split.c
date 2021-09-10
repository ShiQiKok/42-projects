#include <stdlib.h>

int	is_seperator(char c, char *sep)
{
	while (*sep || (c == '\0' && *sep == '\0'))
	{
		if (c == *sep)
			return (1);
		sep++;
	}
	return (0);
}

int	cal_arr_size(char *str, char *charset)
{
	char	pre;
	int		i;
	int		count;

	pre = *charset;
	i = 0;
	count = 0;
	while (str[i])
	{
		if (is_seperator(pre, charset) && !is_seperator(str[i], charset))
			count++;
		pre = str[i++];
	}
	return (count);
}

char	*next_string(char *str, char *charset)
{
	int		i;
	int		count;
	char	*string;

	count = 0;
	i = 0;
	while (!is_seperator(str[count], charset) && str[count])
		count++;
	if (count == 0)
		return (NULL);
	string = (char *)malloc(sizeof(char) * (count + 1));
	while (i < count)
	{
		string[i] = str[i];
		i++;
	}
	string[i] = '\0';
	return (string);
}

char	*move_to_next(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (is_seperator(str[i], charset) && !is_seperator(str[i + 1], charset))
			break ;
		i++;
	}
	return (&str[++i]);
}

char	**ft_split(char *str, char *charset)
{
	char	**arr;
	char	*next;
	int		count;
	int		i;

	count = cal_arr_size(str, charset);
	i = 0;
	next = str;
	arr = (char **)malloc(sizeof(char *) * (count + 1));
	if (arr == NULL)
		return (NULL);
	while (i < count)
	{
		if (next_string(next, charset) != NULL)
			arr[i++] = next_string(next, charset);
		next = move_to_next(next, charset);
	}
	arr[i] = 0;
	return (arr);
}
