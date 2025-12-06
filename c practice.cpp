#include<stdio.h>
int main()
{
	int a,b,temp;
	//inputvalues
	printf("enter two numbers");
	scanf("%d",&a,&b);
	//swap using third variable
	temp=a;
	a=b;
	b=temp;
	//output result
	printf("after swapping:a=%d,b=%d\n",a,b);
	return 0;
	
}
