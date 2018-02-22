#include<stdio.h>
int main()
{
int number,n[10],i,j,k=0;
scanf("%d",&number);
for(i=0;i<number;i++)
{
scanf("%d",&n[i]);
}
for(i=0;i<number;i++)
{
 for(j=number;j>0;j--)
 {
 if(n[i]==n[j])
 {
 k++;
 }
 }
 if(k>0)
 {
 printf("%d",n[i]);
 break;
 }
 }
 return 0;
 }
