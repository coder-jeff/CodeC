#include<stdio.h>
int jisuan(int a,int b)
{
    int i,j,sum1=0,sum2=0;
     for(i=0;i<=b;i++)
    {
    for(j=0;j<=i;j++)
    sum1=sum1*10+1;
    sum2=sum2+sum1*a;
    sum1=0;
    }
return sum2;
}
main()
{
    int a=0,b=0,c=0;
    scanf("%d%d",&a,&b);
    b=b-1;
    c=jisuan(a,b);
    printf("%d",c);
}