#include<stdio.h>
int main()
{
float n;
int k,t;
scanf("%f",&n);
t=10*n;
k=t%10;
printf("%d",(t+(10-k))/10);
return 0;
}
