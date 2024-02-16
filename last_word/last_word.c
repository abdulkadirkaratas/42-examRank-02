#include <unistd.h>

int ft_strlen(char *str)
{
	int len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		char *str = argv[1];
		int len = ft_strlen(str);

		while (len > 0)
		{
			if (!(str[len - 1] == ' ' || str[len - 1] == '\t'))
				break;
			len--;
		}

		if (len != 0)
		{
			int last_index = len - 1;
			while (len > 0)
			{
				if (str[len - 1] == ' ' || str[len - 1] == '\t')
					break;
				len--;
			}
			int start_index = len;

			while (start_index <= last_index)
			{
				write(1, &str[start_index], 1);
				start_index++;
			}
		}
	}
	write(1, "\n", 1);
}
