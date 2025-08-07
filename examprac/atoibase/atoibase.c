#include <stdio.h>

int  ft_atoi_base(char *str, int str_base){
    char base[] = "0123456789abcdef";
    int nbr = 0;
    int j = 0;
    int  i = 0;
    int sign = 1;
    while(str[i]){
        if(str[j++] == '-')
            sign *= -1;
        if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        i++;
    }
    while(str[j]){
    nbr = nbr * str_base + base[str[j] - '0'];
    j++;    
    }
    return nbr * sign;
}

int main(){
    printf("%d", ft_atoi_base("25", 10));
}
