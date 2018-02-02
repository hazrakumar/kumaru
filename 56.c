#include<stdio.h>
int main()
{
char stc[20];
int i,count1=0,count2=0,count;
gets(stc);
for(i=0;stc[i]!='\0';i++)
{
if((stc[i]>='a' && stc[i]<='z') || (stc[i]>='A' && stc[i]<='Z') )
{
count1++;
}
else if(stc[i]>='0' && stc[i]<='9')	
{
count2++;
}
}
if((count1>0) && (count2>0))
  printf("yes");
  else
    printf("no");
return 0;

}
