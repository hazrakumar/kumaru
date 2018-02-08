#include<stdio.h>
int main()
{
char s[100];
int i,sum=0;
gets(s);
for(i=0;s[i]!='\0';i++)
{
if(s[i]=='.')
{
sum++;
}
}
printf("%d",sum);
return 0;
}
