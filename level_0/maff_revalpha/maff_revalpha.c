


#include <unistd.h>



int	main()
{
	char z;
	char y;

	z = 'z';
	y = 'Y';
	while (z >= 'b')
	{
		write(1, &z, 1);
		write(1, &y, 1);
		z -= 2;
		y -= 2;
	}
	write(1, "\n", 1);
	return (0);
}
