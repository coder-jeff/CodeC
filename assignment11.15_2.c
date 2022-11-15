#include<stdio.h>
int px(int n)
{
    int k=1;
    while(n>1)
    {
        k*=n;
        n--;
    }
    return k;
}
int p(int n)
{
    if(n==1||n==0)return 1;
    else return n*p(n-1);
}
void main(void)
{
    int n;
    scanf("%d",&n);
    while(n>=0)
    {
        if(n<=12)
        printf("%d,%d\n",px(n),p(n));
        scanf("%d",&n);
    }
}
//阶乘