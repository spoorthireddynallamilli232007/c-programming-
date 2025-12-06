#include<stdio.h>
main()
{
	int a[10][10],t[10][10];
	int r,c,i,j;
	printf("enter no.of rows & columns");
	scanf("%d %d", &r,&c);
	printf("enter %d elements",r*c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			t[j][i]=a[i][j];
		}
	}
	printf("the transposer matrix :\n");
	for (i = 0;i<c;i++)
	{
		for (j=0;j<r;j++)
		{
			printf("%d\t",t[i][j]);
		}
		printf("\n");
	}
}
