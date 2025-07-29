#include <stdlib.h>
int	*ft_range(int min, int max)
{
	int	len;
	int	i;

	len = max - min;
	if(len <= 0)
		return NULL;
	
	int	*nbr = malloc(len * sizeof(int));
	i = 0;
	while(min < max)
	{
		nbr[i] = min;
		min++;
		i++;
	}
	return nbr;	
}
#include <stdio.h>
int main()
{
	int	i;

	int *res = ft_range(1, 10);
	if (res == NULL)
		return;
	i = 0;
	while(i < 10)
	{
		printf("%d",res[i]);
		i++;
	}
}
