#include<stdio.h>
int main()
{
int first=0,second=1,sum,k,t,num,i;
scanf("%d",&num);
printf("%d\n%d\n",first,second);
for(i=1;i<num;i++)
{
sum=first+second;
first=second;
second=sum;
printf("%d\n",sum);
}

return 0;
}

