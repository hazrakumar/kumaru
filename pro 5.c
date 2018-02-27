#include<stdio.h>
int main()
{
int num,a,b,i,k;
scanf("%d%d%d",&num,&a,&b);
k=a+b;
if(num%k==0)
printf("yes");
else
printf("no");
return 0;
}
