#include<stdio.h>
int main()
{
int a[10],i,j,temp;
for(i=0;i<10;i++)
{
scanf("%d",a[i]);
}
for(i=0;i<10;i++)
{
for(j=i+1;j<10;j++)
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
printf("%d",a[9]);
return 0;
}
