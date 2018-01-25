int main()
{
int a[5],num,i,k,j,count=-1;
scanf("%d",&num);
for(i=0;i<num;i++)
{
scanf("%d",&a[i]);
}
k=0;

for(i=0;i<num;i++)

{
for(j=i+1;j<num;j++)
count++;
{

if(a[i]>a[j])
{

k=a[i];
a[i]=a[j];
a[j]=k;
	

}

	
}



	
}
printf("%d",count);
return 0;
}
