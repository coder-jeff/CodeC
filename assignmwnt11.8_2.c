#include<stdio.h>
main()
{
    int a[5][4]={{74,45,67,45},{55,88,98,70},{77,88,59,94},{54,65,76,88},{60,99,78,87}},i,j,k;
    for(i=0;i<5;i++)
    for(j=0;j<4;j++)
    if(a[i][j]<60)
    {
        for(k=0;k<4;k++)
        printf("%4d",a[i][k]);
        putchar('\n');
        break;
    }
}
//有5个学生，每个学生有四门课程，将有不及格课程的学生的所有成绩输出（注意不要重复输出一个学生的成绩）。