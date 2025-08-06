char	*ft_strcpy(char *s1, char *s2)
{
	int	i = 0;
	while(s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	return s1;
}
#include <stdio.h>
int main()
{
	char dest[23];
	char src[20] = "hello";
	printf("%s",ft_strcpy(dest, src));
}
