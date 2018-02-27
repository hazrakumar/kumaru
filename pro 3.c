#include<stdio.h>
int main()
{
char a[10],b[10];
int i,k=0,sum=0,temp;
scanf("%s%s",a,b);
for(i=0;b[i]!='\0';i++,k++)
{
	if(a[i]==b[i])
	{
		sum++;
	}
}
temp=k-sum;
printf("min cost is : %d",temp);
return 0;
}
