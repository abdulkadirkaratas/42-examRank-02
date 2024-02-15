#include <unistd.h>

void print_bits(unsigned char octet)
{
	int shiftnum = 7;
	int putbit;
	while (shiftnum >= 0)
	{
		putbit = ((octet >> shiftnum) & 1) + '0';
		write(1, &putbit, 1); // 1(dec) = 00000001(bin)
		shiftnum--;
	}
}
