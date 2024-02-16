#include <stdlib.h>

int ft_strlen(char *str)
{
	int len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char *ft_strdup(char *src)
{
	char *newstr = (char *)malloc(ft_strlen(src) + 1);
	if (newstr == NULL)
		return (NULL);

	int i = 0;
	while (src[i] != 0)
	{
		newstr[i] = src[i];
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
