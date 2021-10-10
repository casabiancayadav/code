/*   Binary of  float through char type pointer  */

#include <stdio.h>
int main()
{
    int byte=4,bit;
    float num;
    char *ptr=NULL;
    scanf("%f",&num);
    
    ptr=(char*)&num;
    ptr+=3;                                //higher byte represent
    
    while(byte--)                          // for 4 bytes
    {
    for(bit=7;bit>=0;bit--)                // for 8 bits for every byte    
           printf("%d",(*ptr>>bit) & 1);
    
       printf(" ");                       //space after every 8 bit 
	   ptr--;
    }  
    return 0;
}
