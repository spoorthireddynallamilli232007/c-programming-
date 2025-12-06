//factorial of a number using recursive//
#include<stdio.h>
int fact(int);
main()
{
	int n,factorial;
	printf("enter a number");
	scanf("%d",&n);
	factorial=fact(n);
	printf("the factorial is %d",factorial);
}
int fact(int m)
{
	int f;
	if(m==0)
	{
		return 1;
	}
	f=m*fact(m-1);
	return f;
}
