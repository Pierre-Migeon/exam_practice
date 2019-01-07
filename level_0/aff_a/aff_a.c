

#include <unistd.h>



void	ft_aff_a(char *str)
{
	while(*str)
	{
		if(*str == 'a')
			write(1, "a", 1);
		str++;
	}
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	ft_aff_a(argv[1]);
	write(1, "\n", 1);
	return (0);
}
