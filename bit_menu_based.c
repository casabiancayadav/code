#include<stdio.h>
#include<stdlib.h>

        void printMenu()
        {
                printf("\nMENU\n\n");
                printf("s:\tSet the Bit\n");
                printf("c:\tClear the Bit\n");
                printf("t:\tToggle the Bit\n");
                printf("o:\tComplement the data\n");
                printf("r:\trevrse the bit,with data change\n");
                printf("p:\tPrint\n");
                printf("q:\tQuit\n");
        }

        int setbit(int copy,int bit)
        {
               return copy | (1<<bit);
        }

        int clearbit(int copy,int bit)
        {
               return copy & ~(1<<bit);
        }

        int togglebit(int copy,int bit)
        {
               return copy ^ (1<<bit);
        }

        int complement_data(int copy)
        {
               return ~copy;
        }

        int reverse(int copy)
        {
                int i,data=0;
                for( i=0;i<=31;i++)
                {
                        data=data+((copy>>i)&1);
                        if(i<31)
                        data=data<<1;
                }
                return data;
        }


        int printoutput(int copy)
        {
        	int i;
                printf("\tDATA IN DECIMAL=%d\n",copy);
                printf("\tDATA IN BINARY =");
                for(i=31;i>=0;i--)
                {
                printf("%d",(copy>>i) & 1);
                if(i%8==0)
                   printf(" ");
                }
        }





int main()
{
        int data,bit,i;
        char choice;
        printf("ENTER DATA\n");
        scanf("%d",&data);
	
        printf("\tDATA IN BINARY =");
	for(i=31;i>=0;i--)
        {
          printf("%d",(data>>i) & 1);
          if(i%8==0)
          printf(" ");
         }

        while(1)
        {       printMenu();
                printf("Enter Your Choice\n");
				fflush(stdin);
//                __fpurge();
		scanf(" %c",&choice);
		if(choice=='s' || choice=='c' || choice=='t')
		{
		printf("which bit=");
                scanf("%d",&bit);
		}
                switch(choice)
                {
                        case 's': printoutput(data=setbit(data,bit));
                                         break;
                        case 'c': printoutput(data=clearbit(data,bit));
                                         break;
                        case 't': printoutput(data=togglebit(data,bit));
                                         break;
                        case 'o': printoutput(data=complement_data(data));
                                         break;
                        case 'r': printoutput(data=reverse(data));
                                         break;
                        case 'p': printoutput(data);
                                         break;
                        case 'q': return 0;

                        default: printf("invalid choice\n");
                                         break;
                }
        }
}
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      


                                                                                                                                                                                                                                                                                  
