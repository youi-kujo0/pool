#include <stdio.h>

int ft_str_is_numeric(char *str)
{
	int	i;
	i = 0;
	if(str[i] == 0)
	{
		return 1;
	}
	while(str[i] != 0)
	{
		if(str[i] < '0'|| str[i] > '9')
		{
			return 0;
		}
		i++;
	}
	return 1;
}

int main(void)
{
    char *test1 = "123456";
    char *test2 = "42abc";
    char *test3 = "";
    char *test4 = "007";
    char *test5 = "12 34";

    printf("Test 1: \"%s\" -> %d\n", test1, ft_str_is_numeric(test1)); // Expect 1
    printf("Test 2: \"%s\" -> %d\n", test2, ft_str_is_numeric(test2)); // Expect 0
    printf("Test 3: \"%s\" -> %d\n", test3, ft_str_is_numeric(test3)); // Expect 1
    printf("Test 4: \"%s\" -> %d\n", test4, ft_str_is_numeric(test4)); // Expect 1
    printf("Test 5: \"%s\" -> %d\n", test5, ft_str_is_numeric(test5)); // Expect 0

    return 0;
}
