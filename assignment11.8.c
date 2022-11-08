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
//回文