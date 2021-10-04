/*  delete duplicate integers from the given ineger array
 *  Ex.  i/p==     {1,2,3,4,4,5,1}
 *       o/p==     {2,3,5}
 */



#include <stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,0,9,8,6,5,5,123,122};
    int i=0,j=0,size,flag=0;
    size=sizeof(arr)/sizeof(int);
    printf("BEFORE SHIFTING :");		//Actual Array elements printimg
    for(i=0;i<size;i++)
        printf("%d,",arr[i]);

    
    for(i=0;i<size;i++,flag=0)			// picking 1st element to check
    {
        for(j=0;j<size;j++)			// for checking first element in whole array
        {
        if(( arr[i]==arr[j] ) && (i!=j))	//comparision(except self index)
            {														
            flag=1;
            memmove(arr+j,arr+j+1,(size-j-1)*sizeof(int));		
            j--;
            size--; 
            }
        }
        if(flag)						//for removing self index(only for duplicates element)
        {
            memmove(arr+i,arr+i+1,(size-i-1)*sizeof(int));
            size--;
            i--;
        }
    }
 
    
    printf("\nAFTER SHIFTING :");		/* printing final output array with all duplicate elements removed(not even a single 
    							occuranece of that duplicate element ) */
    for(i=0;i<size;i++)
        printf("%d,",arr[i]);

    return 0;
}
