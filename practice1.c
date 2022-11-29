#include<stdio.h>
float gongshi(int n)
{
    float i,j=0,a=0;
    for(i=1;i<=n;i++)
    {
        j=j+i;
        a+=1/j;
    }
    return a;
}
main()
{
    int n=0;
    float sum=0;
    scanf("%d",&n);
    sum=gongshi(n);
    printf("%f",sum);
}