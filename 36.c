#include<stdio.h>
int main()
{
char stc[20];
int i=0,count1=0,count2=0,count3=0,count;
gets(stc);
while(stc[i]!='\0') 
{
if((stc[i]>='a' && stc[i]<='z') || (stc[i]>='A' && stc[i]<='Z') )
{
count1++;
break;
}
i++;
}
while(stc[i]!='\0')
{
if(stc[i]>='0' && stc[i]<='9')	
{
count2++;
break;
}
i++;
}
while(stc[i]!='\0')
{
if(stc[i]!=)
{
count3++;
break;
}
i++;
}
count=count1+count2+count3;

printf("%d",count);
return 0;

}
