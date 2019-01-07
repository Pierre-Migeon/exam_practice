


#include <unistd.h>

int	ft_strlen(char *str)
{
	return (*str ? 1 + ft_strlen(str + 1) : 0);
}

int	main(int argc, char **argv)
{
	int len;

	if (argc == 1)
	{
		write(1, "\n", 1);
		return (0);
	}
	len = ft_strlen(argv[argc - 1]);
	write(1, argv[argc - 1], len);
	write(1, "\n", 1);
	return (0);
}
