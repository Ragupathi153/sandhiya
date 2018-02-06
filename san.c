#include<stdio.h>
#include<conio.h>
void main()
{
int n,r,s=0;
clrscr();
scanf("%d",&n);
while(n>0)
{
r=n%10;
s=s+(r*r*r);
s=n/10;
}
if(n==s)
{
printf("armstrong");
}
else
{
printf("not armstrong");
}
getch();
}
