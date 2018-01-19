#include<stdio.h>
void main()
{
int n1,n2,i,j,count=0;
scanf("%d%d",&n1,&n2);
for(i=++n1;i<n2;i++)
{
for(j=1;j<i;j++)
{
if(i%2==0)
{
count++;
}
}
if(count==2)
printF("%d",i);
}
}
