#include<stdio.h>
int main()
{
int s,n[10],i,j,k=0;
scanf("%d",&s);
for(i=0;i<s;i++)
{
scanf("%d",&n[i]);
}
for(i=0;i<s;i++)
{
 for(j=s;j>0;j--)
 {
 if(n[i]+n[j]==0)
 {
 k++;
 }
 }
 if(k>0)
 {
 printf("%d\n%d",n[i],n[i]*-1);
 break;
 }
 }
 return 0;
 }
