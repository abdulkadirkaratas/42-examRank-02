#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	if (argc == 4)
	{
		int num1 = atoi(argv[1]);
		char *op = argv[2];
		int num2 = atoi(argv[3]);

		if (op[0] == '+')
			printf("%d", num1 + num2);
		else if (op[0] == '-')
			printf("%d", num1 - num2);
		else if (op[0] == '*')
			printf("%d", num1 * num2);
		else if (op[0] == '/')
			printf("%d", num1 / num2);
		else if (op[0] == '%')
			printf("%d", num1 % num2);
	}
	printf("\n");
}
