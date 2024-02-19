#include <unistd.h>

int ft_strlen(char *str)
{
	int i = 0;
	while (str[i] != '\0')
		i++;

	return (i);
}

int str2control(char c, char *str2)
{
	int i = 0;
	while (str2[i] != 0)
	{
		if (c == str2[i])
			return (1);
		i++;
	}
	return (0);
}

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		char *str1 = argv[1];
		char *str2 = argv[2];

		int control = 1;
		int i = 0;
		while (str1[i] != 0)
		{
			if (str2control(str1[i], str2) == 0)
			{
				control = 0;
				break;
			}
			i++;
		}

		if (control == 1)
			write(1, str1, ft_strlen(str1));
	}
	write(1, "\n", 1);
}
