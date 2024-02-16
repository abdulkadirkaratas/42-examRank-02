#include "stdio.h"

int ft_strlen(char *str)
{
	int len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char *ft_strrev(char *str)
{
	int len = ft_strlen(str);
	int i = 0;
	while (i < (len / 2))
	{
		char temp = str[i];
		str[i] = str[(len - 1) - i];
		str[(len - 1) - i] = temp;
		i++;
	}
	return (str);
}

// int main()
//{
//	char str[] = "dub0 a POIL";
//	printf("%s", ft_strrev(str));
// }
