#include<stdio.h>
main()
{
 int ret;
 printf("hello\n");
 ret=fork();
 printf("ret=%d\n",ret);
}
