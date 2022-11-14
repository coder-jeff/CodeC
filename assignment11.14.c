#include<stdio.h>
void compare(int grade[10],int *pmax,int *pmin)
{
    int i=0;
    *pmax=grade[0],*pmin=grade[0];
    for(i;i<10;i++)
    {
        if(grade[i]>*pmax)
        *pmax=grade[i];
        else if(grade[i]<*pmin)
        *pmin=grade[i];
    }
}
int main()
{
    int i=0,grade[10]={0},max,min;
    for(i;i<10;i++)
    scanf("%d",&grade[i]);
    compare(grade,&max,&min);
    printf("十个学生成绩的最大值为%d,最小值为%d",max,min);
    return 0;
}