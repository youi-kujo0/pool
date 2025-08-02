#include <stdlib.h>

int     *ft_range(int start, int end)
{
	int	len;
	int	i;

	i = 0;
	len = end + 1 - start;
	if(start > end)
		len = -len;
	int *arr = malloc((len + 1) * sizeof(int));
	while(i <= len)
	{
		if(start < end && start < 0)
			arr[i] = start++;
		else if(start > end && end < 0)
			arr[i] = start--;
		else
			arr[i] = start++;
		i++;
	}
	arr[i] = 0;
	return arr;
}
#include <stdio.h>
int main()
{
	int	i;

	int	*arr = ft_range(-1,2);
	i = 0;
	while(arr[i])
	{
		printf("%d", arr[i]);
		i++;
	}
}	
