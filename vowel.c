#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void swap(char *p,char *q)
{
	int i,j=0;
	for(i=0;i<(q-p+1)/2;i++,j--)
	{
	char temp;
	temp=p[i];
	p[i]=q[j];
	q[j]=temp;
    }
}

void search(char *p, char  *q)
{
	int i,j,flag=0,space=0;
	for(i=0 ;i!=strlen(p)+1; i++)
	{
		space++;
	    if((p[i]==' ')  ||  (p[i]=='\0') )
	    {
	    	if(flag>=2)
	    		swap(&p[i-space+1],&p[i-1]);
			
		space=0;
		flag=0;
		continue;
		}
	    	    
	for(j=0;j!=strlen(q);j++)
	  {  
		if(p[i]==q[j])
		  {
		  flag++;
		  break;
	      }	
	  }
    }
   puts(p); 
}

int main()
{
	char string[50],vowel[11]="aeiouAEIOU";
	gets(string);
	search(string,vowel);
	return 0;
}
