#include<stdio.h>
int main()
{
char stc[20];
int i=0,j,k=0,sum=0,count=0;
gets(stc);
for(j=0;j<20;j++)
{
if(stc[j]==' ')
{
count++;
}
}
while(stc[i]!='\0')
{
sum++;
i++;
}
printf("%d\n",count);
printf("%d\n",sum);
k=sum-count;
printf("%d",k);
return 0;

}
