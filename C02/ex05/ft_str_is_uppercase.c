#include <stdio.h>
int ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if(str[i] == 0)
	{
		return 1;
	}
	while(str[i] != 0)
	{
		if(str[i] < 'A' || str[i] > 'Z')
		{
			return 0;
		}
		i++;
	}
	return 1;
}

int main(void)
{
    char *test1 = "HELLO";        // all uppercase -> expect 1
    char *test2 = "Hello";        // contains lowercase -> expect 0
    char *test3 = "WORLD123";     // contains digits -> expect 0
    char *test4 = "";             // empty string -> expect 1
    char *test5 = "ALLUPPERCASE"; // all uppercase -> expect 1

    printf("Test 1: \"%s\" -> %d\n", test1, ft_str_is_uppercase(test1));
    printf("Test 2: \"%s\" -> %d\n", test2, ft_str_is_uppercase(test2));
    printf("Test 3: \"%s\" -> %d\n", test3, ft_str_is_uppercase(test3));
    printf("Test 4: \"%s\" -> %d\n", test4, ft_str_is_uppercase(test4));
    printf("Test 5: \"%s\" -> %d\n", test5, ft_str_is_uppercase(test5));

    return 0;
}
