void	strcpyrec(char	*dest, char	*src)
{
	if(!dest || !src)
		return;
	*dest = *src;
	if(*src == 0)
		return;
       strcpyrec(dest++, src++);
}
#include <stdio.h>
int main()
{
    char str[100];
    strcpyrec(str, "hello");
    printf("%s\n", str); // Output: hello
}

