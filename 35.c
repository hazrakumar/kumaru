#include<stdio.h>
int main()
{
char stc[20];
int i=0,count=0;
gets(stc);
while( (0<=stc[i]<=9) && (stc[i]!='\0') )
{
count++;
i++;
}

printf("%d",count);
return 0;

}

