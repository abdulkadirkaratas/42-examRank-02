
unsigned char swap_bits(unsigned char octet)
{
	unsigned char result = 0;
	unsigned char right = octet & 15; // 15(dec) = 00001111(bin)
	unsigned char left = octet & 240; // 240(dec) = 11110000(bin)

	right = right << 4;
	left = left >> 4;
	result = right + left;

	return (result);
}
