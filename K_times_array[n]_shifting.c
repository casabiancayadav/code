/*  Left rotate k times   */
/*  HackerRAnk Question   */
/*  DATE  27/09/21        */


#include <stdio.h>
int main()
{
    int i,n,k;
    scanf("%d%d",&n,&k);
    int arr[2*n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        arr[n+i]=arr[i];
    }
    for(i=0;i<n;i++)
       printf("%d ",arr[i+k]);             
}
