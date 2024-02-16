
unsigned char reverse_bits(unsigned char octet)
{
	int shiftnum = 0;
	unsigned char res = 0;
	while (shiftnum <= 7)
	{
		unsigned char bit = (octet >> shiftnum) & 1;
		res = (res << 1) + bit;
		shiftnum++;
	}
	return (res);
}
