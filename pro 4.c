#include<stdio.h>
int main()
{
int i,k[10],sum=0;
char a[10],b[10];
scanf("%s%s",a,b);
for(i=0;a[i]!='\0';i++)
{
k[i]=a[i]-b[i];
}
for(i=0;k[i]!='\0';i++)
{
sum=sum+k[i];
}
printf("%d",sum);
return 0;
}
