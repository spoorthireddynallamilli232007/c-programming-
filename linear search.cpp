//linear search
#include <stdio.h>
main()
{
	int x[6] = {9,7,13,6,14,2};
	int key,i,found = 0, pos;
	printf("enter the search element");
	scanf("%d", &key);
	for(i=0;i<5;i++)
	{
		if (key ==x[i])
		{
			found = 1;
			pos = i;
		}
	}
	if (found==1)
	printf("%d is found in %d imdex", key,pos);
	else
	printf("%d is not found",key);
}
