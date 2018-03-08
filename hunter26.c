#include<stdio.h>
int main()
{
int n,n1[50],i;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
scanf("%d",&n1[i]);
}
for(i=n;i>0;i--)
{
printf("%d",n1[i]);
}
return 0;
}
