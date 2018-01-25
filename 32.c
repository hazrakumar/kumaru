#include<stdio.h>
int main()
{
char stc[20];
int i,k=0,count=1;
gets(stc);
for(i=0;i<20;i++)
{
if(stc[i]==' ')
{
count++;
}
}
printf("%d",count);
return 0;

}
