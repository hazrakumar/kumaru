#include<stdio.h>
int main()
{
int n,k=0,temp;
scanf("%d",&n);
while(n!=0)
{
temp=n%10;
n=n/10;
k=k+(temp*temp);
}
printf("%d",k);
return 0;
}
