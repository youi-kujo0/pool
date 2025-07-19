#include <stdio.h>

int length;
int	ft_strlen(char *str)
{
	int	i;
	length = 0;

	while(str[i] != 0)
	{
	i++;
	length++;
	}
	return length;
}

int main()
{
	ft_strlen("coucou cv 3lik");
	printf("%d", length);
}
