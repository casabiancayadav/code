//single occurance alphabate removale from a string.
//i/p=  embedded
//o/p=  eedded
//date 26/09/21

#include<stdio.h>
#include<string.h>

int main()
{
char str[]="embedded";
int i,j,cnt=0,size;
size=strlen(str);
for(i=0;i<size;i++)
 {
	 cnt=0;
	 if(str[i])
	 {
		 for(j=0;j<size;j++)
		 {
			 if(str[i]==str[j])
				 cnt++;
		 }
	 }
	 if(cnt==1)
	 {
		 memmove(str+i,str+i+1,size-i);
		 i--;
	 }

 } 
	 printf("%s",str);
}

