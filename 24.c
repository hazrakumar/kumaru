#include<stdio.h>
int main()
{
int a[5],num,i,k,j;
scanf("%d",&num);
for(i=0;i<num;i++)
{
scanf("%d",&a[i]);
}
k=0;

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

printf("%d",a[i]);

	
}
return 0;
}

	
