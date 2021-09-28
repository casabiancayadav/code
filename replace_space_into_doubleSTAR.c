/*

Q1.  Write a small function in C language that takes a string as an argument 'src' and returns another string 'dst'.
    'dst' should be a transformation of 'src', wherever there is a space character in the 'src', we should have two star characters in    'dst’.
     eg.. 
     if 'src' = "This is an example"
     then ‘dst’ = "This**is**an**example"

Do not use string library functions

*/


#include<stdio.h>
#include<stdlib.h>

char* Addstar(char* str)
{
char *des;
des=(char *)malloc(100);
int i=0,j;
for(j=i=0;str[ i ] != '\0' ;i++,j++)
{
if(str[i]!=' ')
{
    des[j]=str[i];
}
else
{
    des[j]='*';
    des[j+1]='*';
    j++;
}
}
return des;
}

int main()
{
char src[100]="This is an example";
printf("%s",Addstar(src));
}
