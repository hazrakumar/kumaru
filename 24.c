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
for(j=num;j<5;j--)
{
a[j]=a[i];
}
}
for(i=0;i<num;i++)
{
for(j=0;j<num;j++)
{
if(a[j]<a[i])
{


printf("%d",a[j]);

}

	
}
	
}





return 0;
}
