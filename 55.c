#include<stdio.h>
int main()
{
int num1,num2,i=0,temp,sum=0;
scanf("%d%d",&num1,&num2);
temp=num1*num2;
if(temp%2==0)
{
printf("even");
}
else
printf("odd");
return 0;
}
