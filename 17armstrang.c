#include<stdio.h>
int main()
{
int n,k,temp,count=0;
scanf("%d",&n);
k=n;
while(k!=0)
{
temp=k%10;
count=count+(temp*temp*temp);
k=k/10;
}
if(count==n)
{
printf("num is armstrang");
}
else
{
printf("not armstrang");
}
return 0;
}
