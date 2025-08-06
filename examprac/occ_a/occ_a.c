int		occ_a(char *str)
{
	int	i = 0;
	int	count = 0;
	while(str[i])
	{
		if(str[i] == 'A')
		{
			count++;
			i++;
		}
		i++;
	}
	return count;	
}
#include <stdio.h>
int main()
{	
	printf("%d\n",occ_a("iAm so cutA"));
	printf("%d",occ_a("im so cute"));
}

