




#include <unistd.h>

int	ft_strlen(char *str)
{
	return (*str ? 1 + ft_strlen(str + 1) : 0);
}

int	main(int argc, char **argv)
{
	int len;

	len = 0;
	if (argc < 2)
		write(1, "\n", 1);
	len = ft_strlen(argv[1]); 
	write(1, argv[1], len);
	return (0);
}
