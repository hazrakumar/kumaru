#include<stdio.h>
int main()
{
int num,i=0,k[50],temp,count=0;
scanf("%d",&num);
for(i=0;num!=0;i++,count++)
{
temp=num%10;
k[i]=temp;
num=num/10;
}
for(i=0;i<count;i++)
{
printf("%d",k[i]);
}
return 0;
}

