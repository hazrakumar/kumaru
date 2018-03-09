#include<stdio.h>
int main()
{
char s[15],r[15];
int i,j=0,t=0,k=0;
scanf("%s",s);
for(i=0;s[i]!='\0';i++)
{
t++;
}
for(i=t-1;i>=0;i--)
{
r[j]=s[i];
j++;
}
for(i=0;i<t;i++)
{
if(s[i]==r[i])
{
k++;
}
}
if(k==t)
printf("palindrome");
else
printf("nt");
return 0;
}
