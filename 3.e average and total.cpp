#include<stdio.h>
main()
{
	int m=10,p=7,c=8,s=9,t=6;
	float result;
	float average;
	printf("enter the values m,p,c,s,t");
	scanf("%d%d%d%d%d",&m,&p,&c,&s,&t);
	result=m+p+c+s+t;
	printf("the result is %f",result);
	average=result/5;
	printf("the average is %f",average);
}
