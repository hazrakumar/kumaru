#include <stdio.h>
int main() 
{
int a=10;
int b=20;
printf("%d\t%d\n",a,b);
a= a ^ b;
b= a ^ b;
a= a ^ b;
printf("%d\t%d",a,b);
return 0;
}
