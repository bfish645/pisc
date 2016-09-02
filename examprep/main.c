#include <stdio.h>

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int		i;
	char	c;

	i = 128;
	while (i > 0)
	{
		if (octet < i)
		{
			c = '1';
			i = i / 2;
			write(1, &c, 1);
		}
		else
		{
			c = '0';
			write(1, &c, 1);
			octet = octet - i;
			i = i / 2;
		}
	}
}
int main(void)
{
	unsigned char b = 0x62;
	printf("before b: %d\n",b);
	print_bits(b);
	b = (b << 4) | (b >> 4);
	printf("after b: %d\n",b);
	print_bits(b);
	return (0);
}