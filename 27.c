#include<stdio.h>

int main()
{
char str[10];
scanf("%s",str);
if(str>='0' && str<='9')
printf("it is a string");
else 
printf("it is a numeric");
return 0;
}
