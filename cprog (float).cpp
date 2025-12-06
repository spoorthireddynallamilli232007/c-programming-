//write a simple program to read int,float,char and string using scanf and display using printf//
#include<stdio.h>
main()
{
	int x;
	float y;
	char ch;
	char s[100];
	printf("enter integer");
	scanf("%d",&x);
	printf("enter a floating point number");
	scanf("%f",&y);
	printf("enter a floating point number");
	scanf("\n");
	scanf("%c",&ch);
	printf("enter a string");
	scanf("%s",s);
	printf("the integer is%d\n",x);
	printf("the floating point number is %f\n",y);
	printf("the character is %c\n",ch);
	printf("the string is %s",s);
}
