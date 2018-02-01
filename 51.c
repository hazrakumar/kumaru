#include<stdio.h>
int main()
{
int num,i=0,k[50],temp,count=0,s;
scanf("%d",&num);
for(i=0;num!=0;i++,count++)
{
temp=num%10;
k[i]=temp;
num=num/10;
}
s=count-1;
for(i=s;i>=0;i--)
{
printf("%d\t",k[i]);
}
return 0;
}

