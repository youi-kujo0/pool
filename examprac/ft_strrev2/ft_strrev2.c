#include <stdio.h>
char	*ft_strrev(char *str)
{
	char	tmp;
	int	len = 0;
	int	i = 0;
	while(str[len])
		len++;
	while(i < len / 2)
	{
		printf("i == %i len - i - 1 == %i\n", i, len - i - 1);
		tmp = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = tmp;
		i++;
	}
	return str;
}
#include <stdio.h>
int main()
{
	char dst[] = "123456789";
	ft_strrev(dst);
	printf("%s", dst);
}
