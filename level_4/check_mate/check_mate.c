#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	print_board(int len, char board[len][len])
{
	int i;
	int j; 

	i = 0;
	while(i < len)
	{
		j = 0;
		while(j < len)
		{
			printf("%c ", board[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
}

void	build_board(int len, char **arg, char board[len][len])
{
	int i;
	int j; 

	i = 0;
	while (i < len)
	{
		j = 0;
		while (j < len)
		{
			board[i][j] = arg[i + 1][j];
			j++;
		}
		i++;
	}
}

int	check_match(int i, int j, int len, char board[len][len])
{
	int x;

	if (board[i - 1][j - 1] == 'P' || board[i - 1][j + 1] == 'P')
		return (1);
	x = 0;
	while (x < len)
	{
		//Bishop
		if (board[i - x][j - x] == 'B' || board[i - x][j + x] == 'B' || board[i + x][j + x] == 'B' || board[i + x][j - x] == 'B')
			return (1);
		//Rook
		if (board[i + x][j] == 'R' || board[i][j + x] == 'R' || board[i - x][j] == 'R' || board[i][j - x] == 'R')
			return (1);
		//queen 
		if (board[i - x][j - x] == 'Q' || board[i - x][j + x] == 'Q' || board[i + x][j + x] == 'Q' || board[i + x][j - x] == 'Q' || board[i + x][j] == 'Q' || board[i][j + 1] == 'Q')
			return (1);
		++x;
	}
	return (0);
}
 
void	check_mate(int len, char board[len][len])
{
	int i; 
	int j;
	
	i = 0;
	while (i < len)
	{
		j = 0;
		while (j < len)
		{
			if (board[i][j] == 'K')
				if (check_match(i, j, len, board))
				{
					write(1, "Success", 7);
					return ;
				}
			if (i == len - 1 && j == len - 1)
				write(1, "Fail", 4);
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	char board[argc - 1][argc - 1];
	if(argc > 1)
	{
		build_board(argc - 1, argv, board);
		check_mate(argc - 1, board);
	}
	write(1, "\n", 1);
	return (0);
}
