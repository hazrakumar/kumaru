
#include<stdio.h>
int main()
{
int a[50],num,i,k,j    ;
scanf("%d",&num);
for(i=0;i<num;i++)
{ 
  scanf("%d",&a[i]);
}
  for(i=0;i<num;i++)
  {
    for(j=i+1;j<num;j++)
    {
      if(a[i]>a[j])
      {
        k=a[i];
        a[i]=a[j];
        a[j]=k;
      }
    }
  }
  printf("%d\n",a[0]);
  printf("%d",a[2]);
return 0;
}

