#include<stdio.h>
int main()
{
int n,num[50],i,k=0;
scanf("%d",&n);

for(i=0;i<n;i++)
{
scanf("%d",&num[i]);
}
for(i=0;i<n;i++)
{
printf("%d\t%d\n",num[i],k);
k++;
}
return 0;
}
