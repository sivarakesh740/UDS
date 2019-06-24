#include<stdio.h>
#include<stdio_ext.h>
main()
{
 char a[20],ch;
 printf("enter the string\n");
 scanf("%s",a);
 _fpurge(stdin);
 printf("enter the character\n");
 scanf("%c",&ch);
 printf("a=%s",a);
 printf("ch=%c",ch);
}
