#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int cmpfun(const void *a , const void *b)
{
    return (*(int *)a - *(int *)b);
}
int main()
{
                int n,i,j,min;
                scanf("%d",&n);
                int arr[n];
                for(i=0;i<n;i++)
                    scanf("%d",&arr[i]);
    
              qsort( arr , n , sizeof(int) , cmpfun);
                
                min=arr[1]-arr[0];
                for(i=2;i<n;i++)
                {
                    if(  (arr[i]-arr[i-1])<min )
                        min=(arr[i]-arr[i-1]) ;
                }
                
                printf("%d",min);
}

