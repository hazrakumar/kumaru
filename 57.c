#include <stdio.h>
int main()
{
int n1, n2,k;
scanf("%d%d", &n1, &n2);
printf("%d\t%d\n",n1,n2);
k=n1;
n1=n2;
n2=k;
printf("%d\t%d",n1,n2);
return 0;
}
