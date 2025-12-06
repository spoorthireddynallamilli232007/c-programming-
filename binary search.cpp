//binary search//
#include<stdio.h>
main()
{
	int a[20],i,low=0;
	int mid,high,key,pos;
	printf("enter 10 elements in ascending order");
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	high=9;
	printf("enter search element");
	scanf("%d",&key);
	while(low<=high)
	{
		mid=(low+high)/2;
		if(key==a[mid])
		{
			pos=mid;
			break;
		}
		else if (key<a[mid])
		high=mid-1;
		else
		low=mid+1;
	}
	printf("the searching element is found in %d position,pos");
}

