
#include<stdio.h>
int main()
{
int a[50],num,i,k,avg,sum=0 ;
scanf("%d",&num);
for(i=0;i<num;i++)
{ 
  scanf("%d",&a[i]);
}
  for(i=0;i<num;i++)
 {
 k=sum+a[i];
 sum=k;
}
 
 avg=k/num;
  printf("%d",avg);
return 0;
}

