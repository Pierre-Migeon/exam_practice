
void	ft_swap(int *a, int *b)
{
	int temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
}

#include <stdio.h>
int	main()
{
	int a;
	int b;

	a = 5;
	b = 10;
	ft_swap(&a, &b);
	printf("a is %d, b is %d \n", a, b);	

	return (0);
}
