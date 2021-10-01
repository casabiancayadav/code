#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main()
{
	int data,bit,set=0;
	scanf("%d",&data);
	printf("little endian:");
	for(bit=31;bit>=0;bit--)
		 printf("%d",(data>>bit) & 1);
		  
	printf("\nbig endian:");
   	for(bit=7;set<4;bit--)
	{	
		printf("%d", (data>>bit) & 1);
		if(bit==0)
		{
			data=data>>8;
			bit=8;
			set++;
		}	  
	}
}
