#include<stdio.h>
int main()
{
char a[10],b[10];
int k,i,count=0;
scanf("%s\n%s",a,b);
for(i=0;i<10;i++)
{
if(a[i]==b[i])
{
count++;
k=i;
}
}
if(count==k+1)
{
printf("%s",b);
}
else
printf("not equal");
return 0;
}
