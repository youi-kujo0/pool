int	much_words(char c, char *charset)
{
	int	i;
	i = 0;
      	while(charset[i])
	{
		if(c == charset[i])
			return 1;
		i++;
	}
	return 0;
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	count_words;
	int	in_word;
	int	j;

	count_words = 0;
	j = 0;
	i = 0;
	while(str[j])
	{
		in_word = 0;
		while(str[j] && !(much_words(str[j], charset)))
		{
			in_word = 1;
			j++;
		}
		if(in_word)
		{
			count_words++;
			i = j + 1;
		}
		else
			i = j;
			j++;
	}
	return count_words;
}
void	ft_strcpy(char	*arr, char *str, char *charset)
{
	while()
}
char **ft_split(char *str, char *charset)
{
	char	**arr;
	arr = malloc((count_words(str, charset) + 1) *);
	ft_strcpy

}
#include <stdio.h>
int main()
{
	printf("%d",ft_split("hello-world", "-"));

}
