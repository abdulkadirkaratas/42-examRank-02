#include <stdio.h>

int ft_strlen(const char *str)
{
	int i = 0;
	while (str[i] != '\0')
		i++;

	return (i);
}

int ft_pow(int num, int pow)
{
	if (pow == 0)
		return (1);

	int res = 1;
	int i = 0;
	while (i < pow)
	{
		res = res * num;
		i++;
	}
	return (res);
}

int convert_dec(char c, int base_len)
{
	if (c >= 65 && c <= 90)
		c = c + 32;

	char *base = "0123456789abcdef";

	int i = 0;
	while (i < base_len)
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int ft_atoi_base(const char *str, int str_base)
{
	int lastindex = ft_strlen(str) - 1;
	int res = 0;
	int sign = 1;

	int firstindex = 0;
	if (str[firstindex] == '-')
	{
		sign = -1;
		firstindex++;
	}

	int pow = 0;
	while (lastindex >= firstindex)
	{
		res = res + (ft_pow(str_base, pow) * convert_dec(str[lastindex], str_base));
		lastindex--;
		pow++;
	}

	return (sign * res);
}

int main()
{
	printf("%d\n", ft_atoi_base("010100", 2));
	printf("%d\n", ft_atoi_base("-010100", 2));
	printf("%d\n", ft_atoi_base("4242", 10));
	printf("%d\n", ft_atoi_base("5fe", 16));  // 5fe(hex) = 1534(dec)
	printf("%d\n", ft_atoi_base("-5fE", 16)); // 5fe(hex) = 1534(dec)
}
