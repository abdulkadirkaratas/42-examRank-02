#include <unistd.h>

void ft_putnbr(int nbr)
{
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else
	{
		char res = nbr + '0';
		write(1, &res, 1);
	}
}

int ft_atoi(char *str)
{
	int sign = 1;
	int result = 0;

	int i = 0;
	while (str[i] != 0 && (str[i] == ' ' || str[i] == '\t'))
		i++;

	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}

	while (str[i] != 0 && str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}

	return (sign * result);
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int num = ft_atoi(argv[1]);
		if (num > 0)
		{
			int sum = 0;
			int i = 2;
			while (i <= num)
			{
				int control = 1;
				int j = 2;
				while (j < i)
				{
					if (i % j == 0)
					{
						control = 0;
						break;
					}
					j++;
				}

				if (control == 1)
					sum = sum + i;
				i++;
			}

			ft_putnbr(sum);
			write(1, "\n", 1);
		}
		else
			write(1, "0\n", 2);
	}
	else
		write(1, "0\n", 2);
}
