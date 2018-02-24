#include<stdio.h>
 int smallest(int x, int y, int z)
{
int k = 0;
while ( (x && y && z)!=0 )
{
x--;  y--; z--;
k++;
}
return k;
}
int main()
{
int n1,n2,n3;
scanf("%d%d%d",&n1,&n2,&n3);
printf("Minimum of 3 numbers is %d", smallest(n1,n2,n3));
return 0;
}
