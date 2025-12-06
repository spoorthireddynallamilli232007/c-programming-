#include<stdio.h>
#include<math.h>
main()
{
	float p,t,r,si,ci;
	printf("enter principle amount,time & rate of intrest");
	scanf("%f%f%f",&p&t&r);
	si=p*t*r/100;
	ci=p*pow(1+r/100,t)-p;
	printf("the simple intrest is %f\n",si);
	printf("the compound intrest is%f/n",ci);
}
