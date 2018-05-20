#include<stdio.h>
#include<math.h>
float F(float x)
{
	return x*x-2*x+1;
}
int i=0;
int main()
{
	float a,b,d,c;
	printf("Enter two initial guess a and b in which root lies: ");
	scanf("%f%f",&a,&b);
	printf("\nEnter the tolerance value: ");
	scanf("%f",&d);

	do{
		c = b-((b-a)*F(b)/(F(b)-F(a)));
		++i;
		printf("\nThe value of a and b in %d iteration are %f and %f",i,a,b);
		a=b;
		b=c;
	}while(fabs(a-b)>d);
	printf("\n\nThe root of the equation is :%f",c);
	return 0;
}
