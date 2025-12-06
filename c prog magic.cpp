#include<stdio.h>
#include<conio.h>
#include<graphics.h>ee66676
#include<dos.h>
#include<stlib.h>
void main()
{
	int gd=DETECT,gm,i;
	initgraph(&gd,&gm,"c:\\TURBOC3\\BGI"); //full path to BGI folder
	for(i=0;i<=90;i++)
{
setcolor(i/10);
circle(319,219-i,20+i);
delay(50);
}
getch();
}_
