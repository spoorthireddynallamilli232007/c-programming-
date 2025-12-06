//program on bubble sort//
#include<stdio.h>
main()
{
	int a[20],i,j,n,temp;
	printf("enter the number of elements:");
	scanf("%d",&n);
	printf("enter %d elements",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&n);
	}
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("the sorted array is:\n");
	for(i=0;i<n;i++)
	printf("%d",a[i]);
}
