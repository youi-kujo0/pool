/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 19:50:10 by yel-bouh          #+#    #+#             */
/*   Updated: 2025/08/02 19:51:18 by yel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	ft_strcpy(char *str, char *tstr, int *pos)
{
	int	j;

	j = 0;
	while (str[j])
	{
		tstr[*pos] = str[j];
		(*pos)++;
		j++;
	}
}

int	total_strlen(char **str, char *sep, int size)
{
	int	i;
	int	len;
	int	len_sep;
	int	j;

	len = 0;
	len_sep = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (str[i][j])
		{
			len++;
			j++;
		}
		i++;
	}
	j = 0;
	while (sep[j])
	{
		len_sep++;
		j++;
	}
	return (len + len_sep * (size - 1));
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		pos;
	int		total_len;
	char	*tstr;

	pos = 0;
	i = 0;
	if (size <= 0)
		return (NULL);
	total_len = total_strlen(strs, sep, size);
	tstr = malloc((total_len + 1) * sizeof(char));
	if (!tstr)
		return (NULL);
	while (i < size)
	{
		ft_strcpy(strs[i], tstr, &pos);
		if (i < size - 1)
			ft_strcpy(sep, tstr, &pos);
		i++;
	}
	tstr[pos] = '\0';
	return (tstr);
}
