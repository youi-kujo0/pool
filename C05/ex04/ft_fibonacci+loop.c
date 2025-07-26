int ft_fibonacci(int index)
{
        int str[index + 1];
        int     i;
        int     res;
        int     c;

        i = 2;
        str[0] = 0;
        str[1] = 1;
        while(i <= index)
        {
                str[i] = str[i - 1] + str[i - 2];
                i++;
        }
        c = str[index];
        return c;
}
#include <stdio.h>

int main()
{
        int res = ft_fibonacci(4);
        printf("%d", res);
}
