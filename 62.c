#include<stdio.h>
int main()
{
	char s[20];
int i;
scanf("%d",s);
for(i=0;s[i]!='\0';i++)
{
if(s[i]>0 && s[i]<9)
{
printf("its a binary representation");
break;
}
}
return 0;
}
