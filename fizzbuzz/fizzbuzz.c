#include <unistd.h>

int main()
{
    int num = 1;
    while (num <= 100)
    {
        if (num % 15 == 0)
            write(1, "fizzbuzz", 8);
        else if (num % 5 == 0)
            write(1, "buzz", 4);
        else if (num % 3 == 0)
            write(1, "fizz", 4);
        else
        {
            if (num >= 10)
            {
                int div = (num / 10) + '0';
                write(1, &div, 1);
            }
            int mod = num % 10 + '0';
            write(1, &mod, 1);
        }
        write(1, "\n", 1);
        num++;
    }
}