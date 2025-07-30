/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 20:04:07 by yel-bouh          #+#    #+#             */
/*   Updated: 2025/07/30 11:27:59 by yel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int i;
int j;
int len;
int y;

char *ft_strcpy(char **strs, char *sep)
{
    i = 0;
    len = 0;
    while (strs[i] < size) {
        j = 0;
        while (strs[i][j]) {
            join[len] = strs[i][j];
            len++;
            j++;
        }
        if (strs[i + 1] != NULL) {
            y = 0;
            while (sep[y]) {
                join[len] = sep[y];
                len++;
                y++;
            }
        }
        i++;
    }
    join[len] = '\0';
    return join;
}

int ft_strlen(char **strs, char *sep)
{
    len = 0;
    i = 0;
    while (strs[i]) {
        j = 0;
        while (strs[i][j]) {
            len++;
            j++;
        }
        if (strs[i + 1] != NULL) {
            y = 0;
            while (sep[y]) {
                len++;
                y++;
            }
        }
        i++;
    }
    return len;
}

char *ft_strjoin(int size, char **strs, char *sep)
{
    if (size == 0)
        return NULL;

    int total_len = ft_strlen(strs, sep, size);
    char *join = malloc((total_len + 1) * sizeof(char));

    if (!join)
        return NULL;
    ft_strcpy(join, strs, sep);
    return join;
}

int main()
{
    char *strs[] = {"hello", "world", "how", "are you", "kjdfhhfjfs", "dskfldsfhdsfd"};
    char sep[] = "#/#-#";
    char *joined = ft_strjoin(4, strs, sep);
    printf("%s\n", joined);
    free(joined);
    return 0;
}

