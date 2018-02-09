#include<stdio.h>
int main()
{
int sum=0,i,n;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(n%i==0)
{
sum++;
}
}
if(sum==2)
printf("prime");
else
printf("not prime");
return 0;

}
