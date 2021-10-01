#include<stdio.h>
int main()
{
	int a=25,b=0;
	int sum,carry;

	if(b==0) 
	{
		printf("%d",a);     //corner case
		return 0;
	}
	while(b != 0)
	{
		sum=a^b;
		carry=a&b;

		a=sum;
		b=carry<<1;
	}

	printf("%d",sum);

return 0;
}
