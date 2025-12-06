#include<stdio.h>
main()
{
	int i,marks[6];
	for(i=0;i<6;i++)
	{
		printf("enter sub%d marks",i+1);
		scanf("%d",&marks[i]);
	}
	printf("the marks are:");
	for(i=0;i<6;i++)
	{
		printf("%d\t",marks[i]);
	}
}
