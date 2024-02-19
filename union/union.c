#include <unistd.h>

int str1control(char *str1, int index)
{
	int i = 0;
	while (i < index)
	{
		if (str1[i] == str1[index])
			return (0);
		i++;
	}
	return (1);
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

		int i = 0;
		while (str1[i] != 0)
		{
			if (str1control(str1, i) == 1)
				write(1, &str1[i], 1);
			i++;
		}

		i = 0;
		while (str2[i] != 0)
		{
			if (str1control(str2, i) == 1 && str2control(str2[i], str1) == 0)
				write(1, &str2[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
