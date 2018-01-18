#include<stdio.h>
int main()
{
int a[10],n,sum=0,i,total;
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
scanf("%d",&n);
for(i=0;i<n;i++)
{
total=sum+a[i];
sum=total;
}
printf("%d",total);
return 0;
}
