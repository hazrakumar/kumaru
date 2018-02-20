#include<stdio.h>
int main()
{
int temp,num,n[10],i,j,k[10],m=0;
scanf("%d",&num);
for(i=0;i<num;i++)
{
scanf("%d",&n[i]);
}
for(i=0;i<num;i++)
{
   for(j=i+1;j<num;j++)
    {
      if(n[i]>n[j])
      {
      temp=n[i];    
      n[i]=n[j];
      n[j]=temp;
      }
    }
 }
 for(i=0;i<num;i++)
{
   for(j=num-1;j>0;--j)
   {
   if(n[j]==n[i])
    {
    k[m]=n[i];
   
   }
      
   }
   m++;
   
}
for(i=0;k[i]!='\0';i++) 
{
printf("%d\n",k[i]);
}
return 0;
}
      
      
      
      
      
      
      
      
      
      
      
      
      





