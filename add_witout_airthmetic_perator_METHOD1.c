#include<stdio.h>
int main()
{
	int num1=12,num2=0;

	if(num2>0)
	{
		while(num2)
		{
			num1++;
			num2--;
		}
	}
	
	if(num2<0)
	{
		while(num2)
		{
			num1--;
			num2++;
		}
	}
	
	printf("%d",num1);

return 0;
}
