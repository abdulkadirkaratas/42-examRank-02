#include <unistd.h>

int ft_strlen(char *str)
{
	int i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		char *str = argv[1];
		int lastindex = ft_strlen(str) - 1;

		while (str[lastindex] != 0 && (str[lastindex] == ' ' || str[lastindex] == '\t'))
			lastindex--;

		int control = 0;
		int i = 0;
		while (i <= lastindex)
		{
			if (str[i] >= 33 && str[i] <= 126)
			{
				write(1, &str[i], 1);
				control = 1;
			}
			else
			{
				if (control == 1)
				{
					write(1, "   ", 3);
					control = 0;
				}
			}
			i++;
		}
	}
	write(1, "\n", 1);
}
