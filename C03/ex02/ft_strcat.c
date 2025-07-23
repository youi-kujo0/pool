#include <stdio.h>
	
char *ft_strcat(char *dest, char *src)
{
	int     i;
	int	j;

	j = 0;
	i = 0;
	while(dest[i] != 0)
	{
		i++;
	}
		while(src[j] != 0)
	     	{
			dest[i] = src[j];
			i++;
			j++;
	        }
	return (dest);

}
	
int main()
{
	        char src[30] = "Hello world";
	        char dest[30] = "Hello";
	        char *result = ft_strcat( dest, src );
		printf("%s", result);
}
