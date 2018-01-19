#include<stdio.h>
void main()
{
int n,sum=0,temp;
scanf("%d",&n);
temp=n;
while(temp!=0)
{
sum=sum*10;
sum=sum+temp%10;
temp=temp/10;
}
if(sum==n)
printf("num is palindrome");
else
printf("not palindrome");
}
