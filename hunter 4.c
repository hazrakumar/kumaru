#include<stdio.h>
int main()
{
int num,n[10],i,j,sum=0;
scanf("%d",&num);
for(i=0;i<num;i++)
{
scanf("%d",&n[i]);
}
for(i=0;i<num;i++)
{
 for(j=num;j>0;j--)
 {
 if(n[i]==n[j])
 {
 sum++;
 }
 }
 if(sum>0)
 {
 printf("%d",n[i]);
 break;
 }
 }
 return 0;
 }
 
 
