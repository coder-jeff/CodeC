#include<stdio.h>
#include<string.h>
main()
{
    char str[60];
    int i,j;
    gets(str);
    for(i=0,j=strlen(str)-1;i<j;i++,j--)
        if(str[i]!=str[j])
            break;
    if(i>=j)
        puts("is huiwen");
    else
        puts("not huiwen");
}
//判断一个输入的字符串是否回文？例如：输入的字符串是 "abcba",则程序判定结果是回文。如果输入的字符串是"abaa",则输出判定结果不是回文。