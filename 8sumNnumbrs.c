#include<stdio.h>
void main()
{
int n,i,sum=0,total;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
total=i+sum;
sum=total;
}
printf("%d",sum);
}
