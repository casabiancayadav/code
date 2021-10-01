#include<stdio.h>
int main()
{
	int a=10,b=5;
	int result;
	result=printf("%*c%*c",a,' ',b,32);    //here ' '  or 32   both are same meaning == space
	printf("%d",result);
}
