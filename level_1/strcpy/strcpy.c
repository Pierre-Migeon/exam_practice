

#include <stdlib.h>
char    *ft_strcpy(char *s1, char *s2)
{
	int i;

	i = 0;
	while(s1[i])
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}


#include <stdio.h>
int	main()
{
	char str1[] = "hello";
	char *str2;
	
	str2 = malloc(100 * sizeof(char));
	str2 = ft_strcpy(str1, str2);
	printf("%s", str2);
	return (0);
}
