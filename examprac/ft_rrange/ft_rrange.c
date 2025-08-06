#include <stdlib.h>
int	*ft_rrange(int start, int end)
{
	int	i = 0;
	int	sign = end - start;
	int	len = sign * ((sign > 0) - (sign < 0)) + 1;
	int *arr = malloc(len  * sizeof(int));
	while(i < len){
		arr[i++] = end;;
		if(end < start)
			end++;
		else
			end--;
	}
	return arr;
}


#include <stdio.h>
int main()
{
	int	i = 0;
        int	*arr = ft_rrange(7000, -7000);
	while(i  < 14000){
	printf("%d\n", arr[i]);
	i++;;
	}
}
