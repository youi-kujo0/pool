int	strlenrec(char *str)
{
	if(!*str)
		return 0;
	return 1 + strlenrec(str + 1);
}
#include <stdio.h>
int main()
{
	printf("%d", strlenrec("hello world!"));
}
