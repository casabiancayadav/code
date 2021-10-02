/*  if quantity is less than equal to stock quantity then print calculated price & Left Stock quantity
    otherwise print NO STOCK & Stock quantity   */


#include <stdio.h>

int main()
{
    int i,id,q;
    float result=0;
    
    int ID[]={100,101,102,103};
    float price[]={50.0,40.0,20.0,30.0};
    int stock[]={20,15,10,12};
 
    printf("--ID & QUANTITY--\n");
    scanf("%d%d",&id,&q);
    
    for(i=0;i<4;i++)
    {
        if(id==ID[i])
        {
        if(q<=stock[i])
          {
              result=price[i]*q;
              printf("<%.1f> INR\n",result);
              printf("<%d> LEFT\n",stock[i]-q);
              return 0;
          }
          else
          {
            printf("<NO STOCK\n");
            printf("<%d> LEFT",stock[i]);
          }
        }
    }
    return 0;
}
