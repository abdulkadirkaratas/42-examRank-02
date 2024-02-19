#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		char *str = argv[1];
		int i = 0;
		while (str[i] != 0)
		{
			if (str[i] == '_')
				str[i + 1] = str[i + 1] - 32;
			else
				write(1, &str[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
