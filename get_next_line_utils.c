#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = -1;
	while (src[++i])
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

char	*ft_strchr(const char *str, int s)
{
	while (*str)
	{
		if (*str == s)
			return ((char *)str);
		str++;
	}
	if (s == '\0')
		return ((char *)str);
	return (NULL);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*new_str;
	int		i;
	int		j;
	int		len;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	new_str = (char *)malloc(sizeof(char) * len);
	if (NULL == new_str)
		return (NULL);
	while (s1[i])
		new_str[j++] = s1[i++];
	free(s1);
	i = 0;
	while (s2[i])
		new_str[j++] = s2[i++];
	new_str[j] = '\0';
	return (new_str);
}

char	*ft_strdup(const char *str)
{
	char	*new_str;
	size_t	i;

	i = 0;
	new_str = (char *)malloc(sizeof(char) * ft_strlen(str) + 1);
	if (NULL == new_str)
		return (NULL);
	while (i < ft_strlen(str))
	{
		new_str[i] = str[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
