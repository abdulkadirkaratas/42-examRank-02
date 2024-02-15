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
	if (argc == 4)
	{
		if (ft_strlen(argv[2]) == 1 && ft_strlen(argv[3]) == 1)
		{
			char *str = argv[1];
			char *find = argv[2];
			char *replace = argv[3];

			int i = 0;
			while (str[i] != 0)
			{
				if (str[i] == find[0])
					write(1, &replace[0], 1);
				else
					write(1, &str[i], 1);
				i++;
			}
		}
	}
	write(1, "\n", 1);
}
