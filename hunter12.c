#include<stdio.h>
int main()
{
int n,n1[10],k,i,j,temp;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
scanf("%d",&n1[i]);
}
scanf("%d",&k);
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(n1[i]>n1[j])
{
temp=n1[i];
n1[i]=n1[j];
n1[j]=temp;
}
}
}
printf("%d",n1[k]);
return 0;
}
