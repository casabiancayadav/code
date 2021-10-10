/*add digits from the given string and print the result */

#include <stdio.h>
#include <ctype.h>

int main()
{
int i,num,result=0;
char str[100]="123India88";
for(i=0;str[i];i++)                    //traverse upto string will not reach upto null_character.
{
    if( isdigit(str[i])  )                 //checking element is digit or not, if digit then enter inside the true part.
      result=result+str[i]-48 ;
}
printf("%d",result);
    return 0;
}
