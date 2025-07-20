#include <stdio.h>

char *ft_strcapitalize(char *str)
{
	int	i;
	
	i = 0;
	while(str[i] != 0)
	{	
		if(i == 0 || str[i - 1] == ' ' && (str[i] >= 'a' &&  str[i] <= 'z'))
		{
		str[i] -= 32;
		}
		i++;
	}
	return (str);
}

int main()
{
    char str[] = "hello world! this is a test.";

    printf("Original: %s\n", str);
    printf("Modified: %s\n", ft_strcapitalize(str));  // Test your function
    return 0;
}
