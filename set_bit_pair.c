#include<stdio.h>

int countSetbitPair(int data)
{
	int i,cnt=0;
	for(i=31;i>0;i--)
	{
		if((data>>i)&1)
	           if(data>>(i-=1)&1)  
		      cnt++;
	}
	return cnt;
}

int main()
{
	int data;
	printf("Enter a integer number\n");
	scanf("%d",&data);	
	printf("%d",countSetbitPair(data));	
	return 0;
}

