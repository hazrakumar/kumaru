#include<stdio.h>
int main()
{
int n,i,k1,k2,k3;
char s[10];
scanf("%d",&n);
for(i=0;i<=n;i++)
{
scanf("%c",&s[i]);
}
for(i=1;i<=n;i++)
{
printf("%s",s);
k1=s[i];
k2=s[i+1];
k3=s[i+2];
s[i]=k2;
s[i+1]=k3;
s[i+2]=k1;
}
return 0;
}
