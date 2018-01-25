    #include<stdio.h>
    int main()
    {
    int hr1,min1,hr2,min2,sub1,sub2;
    scanf("%d\t%d",&hr1,&min1);
    scanf("%d\t%d",&hr2,&min2);
    sub1=hr1-hr2;
    sub2=min1-min2;
    printf("%d\t%d",sub1,sub2);
    return 0;
    }
