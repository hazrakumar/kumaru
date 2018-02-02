#include <stdio.h>
int main() 
{
int x=15;
int y=25;
printf("%d\t%d\n",x,y);
x= x^y;
y= x^y;
x= x^y;
printf("%d\t%d",x,y);
return 0;
}
