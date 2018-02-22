#include<stdio.h>
int main()
{
int num,n[10],i,j,k;
scanf("%d",&num);
for(i=0;i<num;i++)
{
scanf("%d",&n[i]);
}
for(i=0;i<num;i++)
{
  for(j=i+1;j<num;j++)
  {
    if(n[i]<n[j])
    {
    k=n[i];
    n[i]=n[j];
    n[j]=k;
    }
  }
}
for(i=0;i<num;i++)  
 {
 printf("%d",n[i]);
 }
 return 0;
 }

    
    
    
    
    
    
    
    
