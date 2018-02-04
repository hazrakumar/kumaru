#include<stdio.h>
int main()
{
int x=0,y=1,temp,k,t,n,i;
scanf("%d",&n);
printf("%d\n%d\n",x,y);
for(i=1;i<num;i++)
{
temp=x+y;
x=y;
y=temp;
printf("%d\n",temp);
}

return 0;
}

