#include<stdio.h>
#include<conio.h>
void main
{
int x;
clrscr();
printf("enter the number");
scanf("%d",&x);
if(x>0)
printf("%d is positive number",x);
else if(x<0)
printf("%d is negative number",x);
else
printf("is zero");
getch();
}
