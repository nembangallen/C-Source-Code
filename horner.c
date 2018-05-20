#include <stdio.h>
 
int main()
{
     float poly[]={4, -2, 5, -1},sum=0,x;
     // x=1;
     int i;
 
     // printf("\nEnter degree of the polynomial X :: ");
     // scanf("%d",&n);
     // printf("\nEnter coefficient's of the polynomial X :: \n");
     // for(i=n;i>=0;i--)
     // {
     //        printf("\nEnter Coefficient of [ X^%d ] :: ",i);
     //        scanf("%f",&poly[i]);
     // }
 
     printf("\nEnter the value of X :: ");
     scanf("%f",&x);
 
     for(i=3;i>0;i--)
     {
        sum=(sum+poly[i])*x;
     }
 
     sum=sum+poly[0];
 
     printf("\nValue of the polynomial is = %f\n",sum);
 
     return 0;
}