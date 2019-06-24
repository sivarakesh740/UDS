#include<stdio.h>
main()
{
 printf("hello..\n");
 vfork();
 printf("hi..\n");
 _exit(0);
}
