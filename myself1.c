#include<stdio.h>
void del(int grade[],int max,int min,int *b)
{
    int i=0,j=0;
    for(i;i<10;i++)
    {
        if(grade[i]>=max||grade[i]<=min)
        {
            grade[j]=grade[i];
            j++;
            (*b)++;
        }
    }
}
int main()
{
    int i=0,grade[10]={0},max,min,b=0;
    printf("输入最大值和最小值");
    scanf("%d%d",&max,&min);
    int t;
    if(max<min)
    {
        t=min;
        min=max;
        max=t;
    }
    printf("输入十个数字");
    for(i;i<10;i++)
    scanf("%d",&grade[i]);
    del(grade,max,min,&b);
    i=0;
    for(i;i<b;i++)
    printf("%d",grade[i]);
    return 0;
}
//编写一个函数完成下面的功能：删除一维整型数组a中值大于x小于y的所有元素。“要求：数组a（10个元素，的值、x和y在main两数中输入。