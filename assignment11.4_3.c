#include<stdio.h>
main()
{
 char a[20],b[20];
 int i=0,j=0;
 gets(a);
 while(a[i]!='\0')
 {
  if(a[i]!='d')
  {
   b[j]=a[i];
   j++;
  }
  i++;
 }
  b[j]='\0';
  puts(b);
}
//删除一个英文字符串当中所有的字母’d’。