#include<stdio.h>
int main()
{
int t,k,s;
scanf("%d",&t);
if(t>60)
{
k=t/60;
s=t%60;
printf("%d hours %d minutes",k,s);
}
else
printf("%d minutes",t);
return 0;
}
