#include<stdio.h>
int main()
{
int n,n1[10],k,i;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
scanf("%d",&n1[i]);
}
scanf("%d",&k);
printf("%d\t%d\t%d",n1[k-1],n1[k+1],n1[k-2]);
return 0;
}
