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
		int last_index = ft_strlen(str) - 1;

		while (last_index >= 0)
		{
			write(1, &str[last_index], 1);
			last_index--;
		}
	}
	write(1, "\n", 1);
}
