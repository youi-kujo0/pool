#include <stdio.h>

char *ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	if(to_find[j] == 0)
		return str;
	while(str[i] != 0)
	{
		while(str[i + j] == to_find[j] && to_find[j] != 0)
		{
			j++;
		}
		if(to_find[j] == 0)
			return str + i;		
		i++;
	}
	return NULL;

}

int main()
{
	char	str[30] = "hello world i love you";
	char	to_find[30] = "worlld";
	char	*result = ft_strstr(str,to_find);
	printf("%s", result);
}
