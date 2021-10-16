#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int cmpfun(const void *a, const void *b)
{
    return ( *(int*)a - *(int*)b );
}

int main()
{
    int i,n;
    long sum=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
        
    qsort(arr,n,sizeof(int),cmpfun);
 
    printf("%d,%d\n",arr[0],arr[n-1]);

    for(i=0;i<n;i++)
          sum=sum + arr[i]*pow(2,(n-1)-i);
    printf("%ld",sum);
}
