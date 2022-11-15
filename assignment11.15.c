#include<stdio.h>
void  up_down( int n)
{
    printf("n = %d : located at %#p\n",n,&n);
    if(n < 4)
       up_down(n+1);
    printf("n = %d : located at %#p\n",n,&n);
}
void main(void)
{
up_down(1);
}
//输出地址