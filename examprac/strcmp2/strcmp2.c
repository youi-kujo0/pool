int	ft_strcmp(char *s1, char *s2)
{
	int	i = 0;
	while(s1[i] && s2[i])
	{
		if(s1[i] - s2[i] != 0)
			return s1[i] - s2[i];
		i++;
	}
	return s1[i] - s2[i];
}
#include <stdio.h>
int main()
{
	printf("%d\n", ft_strcmp("hello", "hello"));
	printf("%d", ft_strcmp("hello", "hella"));
}
