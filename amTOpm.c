#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//#include<stdio_ext.h>
int main()
{
	int hh,mm;
	char z[3];
	printf("ENTER TIME IN 12HRS formate, hh mm am/pm\n");
	scanf("%d%d%s",&hh,&mm,z);
	
	if(hh<=12 && mm<=59)
	   {
	   	if( strstr(z,"pm")  && ( hh!=0) && (hh!=12) )
	   	   {
	   		hh=hh+12;	
		   }
		if( strstr(z,"am") && ( hh==12) )
		   {
		   	hh=0;
		   }     
		   printf("\n24HRS Formate: %d:%d",hh,mm);   
	   }
return 0;
}
	
	
