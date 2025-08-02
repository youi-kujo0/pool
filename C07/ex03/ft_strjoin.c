/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 20:04:07 by yel-bouh          #+#    #+#             */
/*   Updated: 2025/08/02 15:41:36 by yel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

void	ft_strcpy(char *str, char *tstr, int *pos)
{
	int	j;

	j = 0;
	while(str[j])
	{
		tstr[*pos] = str[j];
		(*pos)++;
		j++;
	}
}

int	total_strlen(char **str,char *sep, int size)
{
	int	i;
	int 	len;
	int 	len_sep;
	int	j;

	len_sep = 0;
	len = 0;
	i = 0;
	while(i < size)
	{
		j = 0;
		while(str[i][j])
		{
			j++;
			len++;
		}
		i++;
	}
	j = 0;
	while(sep[j])
	{
		j++;
		len_sep++;
	}
	return len + (len_sep * (size - 1));
}
char *ft_strjoin(int size, char **strs, char *sep)
{
	int	i;
	int	pos;

	pos = 0;
	i = 0;
	if (size <= 0)
		return NULL;
	int	total_len = total_strlen(strs, sep, size);
	char *tstr = malloc((total_len + 1) * sizeof(char));
	if(!tstr)
		return NULL;
	while(i < size)
	{
		ft_strcpy(strs[i],tstr, &pos);
		if (i < size - 1)
			ft_strcpy(sep, tstr, &pos);
		i++;
	}
	tstr[pos] = '\0';
	return tstr;
}

int main()
{
	char	*strs[] = {"hello", "world", "how", "are you", "kjdfhhfjf"};
	char	sep[] = "-";
	char	*joined;

	joined = ft_strjoin(4, strs, sep);
	printf("%s\n", joined);
	free(joined);
	return (0);
}

