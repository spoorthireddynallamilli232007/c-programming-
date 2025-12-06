#include<stdio.h>
int main()
{
	int n,i,j,temp;
	printf("enter the number of elements: ");
	scanf("%d",&n);
	int array[n];
	
	printf("enter the numbers in the array: ");
	for(i=0;i<n;i++)
	scanf("%d",&array[i]);
	
	for(i=0;i<n-i-1;j++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(array[j]>array[j+1])
			{
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}
	printf("sorted array: ");
	for(i=0;i<n;i++)
	{
		printf("%d",array[i]);
	}
	return0 ;
}
