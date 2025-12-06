//function with arguments and with return type//
#include<stdio.h>
int addition(int,int);
main()
{
	int a,b,result;
	printf("enter a and b values");
	scanf("%d%d",&a,&b);
	result=addition(a,b);
	printf("the sum is %d",result);}
	int addition(int x,int y)
	{
		return x+y;
	}
