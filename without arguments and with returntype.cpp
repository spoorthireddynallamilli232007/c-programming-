//function without arguments and with return type//
#include<stdio.h>
int addition( );
main()
{
	int result;
	result=addition( );
	printf("the sum is %d",result);}
	
	int addition()
{
	int a,b,sum;
	printf("enter a and b values");
	scanf("%d%d",&a,&b);
	sum=a+b;
	return sum;
}
