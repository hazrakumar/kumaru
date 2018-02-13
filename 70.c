#include<stdio.h>
int main()
{
int n,i,k=1,temp;
scanf("%d",&n);
for(i=n;i<1000;i++)
{
temp=k*2;
k=temp;
if(temp>i)
{
printf("%d",temp);
break;
}
}
return 0;
}
