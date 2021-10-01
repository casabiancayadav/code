#include<stdio.h>
int main()
{
	int a=25,b=0;
	int sum,carry;
}
	while(b != 0)
	{
		sum=a^b;
		carry=a&b;

		a=sum;
		b=carry<<1;
	}

	printf("%d",a);

return 0;
}
