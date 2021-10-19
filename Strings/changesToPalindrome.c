#include<stdio.h>
int main()
{
    char *str = "123";
    
    int i = 0,sum = 0;
    while(str[i]!= '\0')
    {
        sum = sum+(str[i]-48);
        i++;
    }
    printf("%d",sum);
    return 0;
}