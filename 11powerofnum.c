#include<stdio.h>
void main()
{
int n,a,i,power,temp=1;
scanf("%d%d",&n,&a);
for(i=0;i<a;i++)
{
power=n*temp;
temp=power;
}
printf("%d",power);
}
