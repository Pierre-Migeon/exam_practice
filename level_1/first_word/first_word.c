#include <unistd.h>

void	ft_first_word(char *str)
{
	while (*str == ' ' || *str == '\t')
		str++;
	while (*str && *str != ' ' && *str != '\t')
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

int	ft_isword(char *str)
{
	while (*str)
	{
		if (*str != ' ' && *str != '\t')
			return (1);
		str++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc != 2 || ft_isword(argv[1]) == 0)
	{
		write(1, "\n", 1);
		return (0);
	}
	ft_first_word(argv[1]);
	return (0);
}
