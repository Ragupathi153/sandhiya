#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,b=0;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(n%1==0)
{
b++;
break;
}
}
if(b==2);
{
printf("prime");
}
else
{
print("not prime");
}
getch();
}
