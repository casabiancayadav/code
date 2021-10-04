#include <stdio.h>
#include<string.h>
#include<stdlib.h>

int cmpfun(const void *a,const void *b)
{
    return (*(int*)a - *(int*)b);
}

int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,0,9,8,6,5,5,123,122};
    int i=0,j=0,size;
    size=sizeof(arr)/sizeof(int);

    qsort(arr,size,sizeof(int),cmpfun);
    
    for(i==0;i<size;i++)
    printf("%d,",arr[i]);

    return 0;
}
