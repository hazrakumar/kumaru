#include<stdio.h>
int main()
{
char a[10]="aeiou",b[15];
int i,j,t=0;
scanf("%s",b);
for(i=0;b[i]!='\0';i++)
{
for(j=0;a[j]!='\0';j++)
{
if(b[i]==a[j])
{
t++;
break;
}}}
if(t>0)
printf("vowvel present");
else
printf("no vowvel");
return 0;
}
