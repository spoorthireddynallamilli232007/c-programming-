#include<stdio.h>
#include<math.h>
main()
{
	float a,b,c,disc,root1,root2,real,imag;
	printf("enter a,b,c values");
	scanf("%d%d%d",&a,&b,&c);
	disc=sqrt(b*b-4*a*c);
	if(disc>0)
 {
    root1=(-b+sqrt(disc))/2*a;
    root2=(-b-sqrt(disc))/2*a;
    printf("%f\t%f",root1,root2);
}
else if(disc==0)
{
	root1=-b/(2*a);
	root2=-b/(2*a);
	printf("%f\t%f",root1,root2);
}
else
{
	real=-b/(2*a);
	imag=sqrt(disc)/2*a;
	printf("root1 is %f +i%f\n root2 is %f-i%f",real,imag,real,imag);
}
}
