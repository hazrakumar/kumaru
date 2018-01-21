#include<stdio.h>
int main()
{
int n1,n2,k,temp,count=0,i;
scanf("%d%d",&n1,&n2);
for(i=n1+1;i<n2;i++)
{
k=i;
while(k!=0)
{
temp=k%10;
count=count+(temp*temp*temp);
k=k/10;
}
if(count==i)
{
printf("num is armstrang");
}
else
{
printf("not armstrang");
}
}
return 0;
}
