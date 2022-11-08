#include<stdio.h>
main()
{
 char str[20];
 int b[26]={0},i=0;
 gets(str);
 for(;str[i]!='\0';i++)
 {
  if (str[i]>='A'&&str[i]<='Z')
  b[str[i]-'A']++;
  }
 for(i=0;i<26;i++)
 printf("%c的个数为%4d\n",'A'+i,b[i]);
} 
//输入一个字符串，统计并输出26个大写英文字母各自出现的次数。