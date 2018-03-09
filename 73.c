#include<stdio.h>
int main()
{
int n,x,y,i,t=0;
scanf("%d%d%d",&n,&x,&y);
for(i=x+1;i<y;i++)
{
if(i==n)
{
t++;
}
}
if(t==1)
printf("given num is between the limit");
else
printf("given num is not in the limit");
return 0;
}
