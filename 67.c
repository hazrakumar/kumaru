#include<stdio.h>
int main()
{
int n,k,temp;
scanf("%d",&n);
temp=n%10;
k=10-temp;
n=n+k;
printf("%d",n);
return 0;
}
