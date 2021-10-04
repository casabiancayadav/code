/*  delete duplicate integers from the given ineger array
 *  Ex.  i/p==     {1,2,3,4,4,5,1}
 *       o/p==     {1,2,3,4,5}
 */



#include <stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,0,9,8,6,5,5,123,122};
    int i=0,j=0,size;
    size=sizeof(arr)/sizeof(int);
    printf("BEFORE SHIFTING :");
    for(i=0;i<size;i++)
        printf("%d,",arr[i]);

    printf("\nSIZE: %d\n",size);
    
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
        if(( arr[i]==arr[j] ) && (i!=j))
            {
            memmove(arr+j,arr+j+1,(size-j-1)*sizeof(int));
            j--;
            size--; 
            }
        }
    }
    printf("\nAFTER SHIFTING SIZE:%d\n",size);
    
    printf("AFTER SHIFTING :");
    for(i=0;i<size;i++)
        printf("%d,",arr[i]);

    return 0;
}
