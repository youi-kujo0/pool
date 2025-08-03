
#include <stdio.h>
#include <stdlib.h>
#include "ft_stock_str.h"

int main(int argc, char **argv)
{
    t_stock_str *arr = ft_strs_to_tab(argc - 1, argv + 1);
    if (!arr)
        return 1;

    int i = 0;
    while (arr[i].str != 0)
    {
        printf("String %d:\n", i);
        printf("  Size: %d\n", arr[i].size);
        printf("  Str : %s\n", arr[i].str);
        printf("  Copy: %s\n\n", arr[i].copy);
        i++;
    }

    i = 0;
    while (arr[i].str != 0)
    {
        free(arr[i].copy);
        i++;
    }
    free(arr);
    return 0;
}
