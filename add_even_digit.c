#include <stdio.h>
#include<string.h>
#include<stdlib.h>

int iseven(int x)
{
    if(x%2==1)
    return 0;
    else
    return 1;
}

int main()
{
    int num=111,digit,sum=0;
    
    while(num)
    {
        digit=num%10;
        if(iseven(digit))
        {
            sum=sum+digit;
        }
        num=num/10;
    }
    
    printf("%d",sum);
    return 0;
}
