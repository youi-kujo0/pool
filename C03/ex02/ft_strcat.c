#include <stdio.h>
	
char *ft_strcat(char *dest, char *src)
{
	int     i;
	int	j;

	j = 0;
	i = 0;
	while(dest[i] != 0)
	{
		while(src[j] != 0)
	     	{
			dest[i] = src[j];
			i++;
			j++;
	        }
		i++;
	}
	return dest;

}
	
int main()
{
	        char src[15] = "hello world!";
	        char dest[15] = "hello";
	        char *result = ft_strcat( dest, src );
		printf("%s", result);
}
