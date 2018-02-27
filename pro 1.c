#include<stdio.h>
int main()
{
char a[10],b[10];
int i,k=0;
scanf("%s%s",a,b);
for(i=0;a[i]!='\0';i++,k++)
{
if(a[i]!=b[i])
{
break;
}
}
for(i=0;i<k;i++)
{
printf("%c",a[i]);
}
return 0;
}
