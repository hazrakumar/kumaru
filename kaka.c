#include<stdio.h>
int main()
{
int lc,ic,rc,hl,sp,p,total=2250;
scanf("%d%d%d%d%d%d",&lc,&ic,&rc,&hl,&sp,&p);
if( (lc==1)&&(ic==1)&&(rc==1)&&(hl==1)&&(sp==1)&&(p<3)  )
{
	printf("congrtas");
}
else if( (lc==0)&&(ic==1)&&(rc==1)&&(hl==1)&&(sp==1)&&(p<3)  )
{
	printf("pay %d",total-1000);
}
else if( (lc==1)&&(ic==0)&&(rc==1)&&(hl==1)&&(sp==1)&&(p<3)  )
{
	printf("pay %d",total-500);
}
else if( (lc==1)&&(ic==1)&&(rc==0)&&(hl==1)&&(sp==1)&&(p<3)  )
{
	printf("pay %d",total-700);
}
else if( (lc==1)&&(ic==1)&&(rc==1)&&(hl==0)&&(sp==1)&&(p<3)  )
{
	printf("pay %d",total-400);
}
else if( (lc==1)&&(ic==1)&&(rc==1)&&(hl==1)&&(sp==0)&&(p<3)  )
{
	printf("pay %d",total-350);
}
else if( (lc==1)&&(ic==1)&&(rc==1)&&(hl==1)&&(sp==1)&&(p>2)  )
{
	printf("pay %d",total-300);
}
return 0;
}
