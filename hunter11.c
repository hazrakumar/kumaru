 
#include<stdio.h>
int main()
{
char s[20];
int i,k=0;
gets(s);
for(i=0;s[i]!='\0';i++)
{
k++;
}
for(i=k;i>=0;i--)
{
if(s[i]!=' ')
{
printf("%c",s[i]);
}
else
printf("\t");

}
return 0;
}
