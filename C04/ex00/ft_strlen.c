#include <stdio.h>

int ft_strlen(char *str)
{
    int len = 0;
    while (str[len])
    {
        len++;
    }
    return len;
}

int main()
{
    char *str = "brightyellowcandlesflickeringsoftlynow";
    int len = ft_strlen(str);
    printf("Length: %d\n", len);
    return 0;
}

