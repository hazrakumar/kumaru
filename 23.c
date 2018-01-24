#include<stdio.h>
int main()
{
int a[5],num,i,k;
scanf("%d",&num);
for(i=0;i<num;i++)
{
scanf("%d",&a[i]);
}
k=1;
for(i=0;i<num;i++)
{
if(a[i]<k)
{
k=a[i];
}
}
printf("%d",k);
return 0;
}
