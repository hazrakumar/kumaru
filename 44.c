
#include<stdio.h>
int main()
{
int num,i,count=0;
scanf("%d",&num);
for(i=1;i<=10;i++)
{
if(num==i)
{
count++;
}
}
if(count>0)
printf("Yes");
return 0;
}









