#include <stdio.h>

char *ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while(str[i] != 0)
	{
		if(str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

int main(void)
{
    char test1[] = "hello world!";
    char test2[] = "Already UPPERCASE";
    char test3[] = "1234abcDEF";
    char test4[] = "";
    char test5[] = "mixed CASE 123";

    printf("Before: \"%s\"", test1);
    printf(" -> After: \"%s\"\n", ft_strupcase(test1));

    printf("Before: \"%s\"", test2);
    printf(" -> After: \"%s\"\n", ft_strupcase(test2));

    printf("Before: \"%s\"", test3);
    printf(" -> After: \"%s\"\n", ft_strupcase(test3));

    printf("Before: \"%s\"", test4);
    printf(" -> After: \"%s\"\n", ft_strupcase(test4));

    printf("Before: \"%s\"", test5);
    printf(" -> After: \"%s\"\n", ft_strupcase(test5));

    return 0;
}

