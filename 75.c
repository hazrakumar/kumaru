#include<stdio.h>
int main()
{
int i,k=0,t;
char a[20];
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
	k++;
}
t=k/2;
if(k%2!=0)
{
	for(i=0;i<k;i++)
	{
		a[t]='*';
		printf("%c",a[i]);
	}
}
else

	for(i=0;i<k;i++)
	{
		a[1]='*';
		printf("%c",a[i]);
	}
return 0;
}
