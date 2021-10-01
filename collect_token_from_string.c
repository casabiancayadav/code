#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	int i,word_cnt=0;
	char str[100]="Lion is king of Black forest";
	char *token=NULL;
	char *arr[50];
	token=strtok(str," ");
	if(token==NULL)
	  {
            printf("STRING IS NULL");
            return 0;
	  }

	for(i=0;token;i++)
	{
		arr[i]=token;
		word_cnt++;
		token=strtok(NULL," ");
	}
	
	for(i=0;i<word_cnt;i++)
	printf("%s\n",arr[i]);
      //printf("%d",word_cnt);             //word quantity in given string

/*	if(word_cnt%2==1)                               //print middle sub string     
		printf("%s",arr[word_cnt/2]);           //ex. lion is king of forest
							//o/p=        king
	else						//ex. lion is king of Black forest
                                                        //o/p=        king of
	{
	printf("\n%s,",arr[(word_cnt/2)-1]);
	printf("%s",arr[word_cnt/2]);

	}
*/	
}

