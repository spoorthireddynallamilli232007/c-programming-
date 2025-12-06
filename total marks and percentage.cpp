#include<stdio.h>
main()
{
	int i,marks[6],per,sum=0;
	for (i=0;i<6;i++)
	{
		printf("enter sub%dmarks",i+1);
		scanf("%d",&marks[i]);
	}
	for(i=0;i<6;i++)
	{
		sum =sum+marks[i];
	}
	per=(sum/600.0)*100;
	printf("the total marks:%d",sum);
	printf(" the percentage is %d",per);
}
