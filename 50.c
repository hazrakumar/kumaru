#include<stdio.h>
int main()
{
int num,count=0,temp;
scanf("%d",&num);
temp=num;
while(temp!=1)
{
if(temp%2!=0)
{
count++;
break;
}
temp=temp/2;
}
if(count==0)
printf("given num is power of TWO");
else
printf("given num is not power of TWO");
return 0;
}
