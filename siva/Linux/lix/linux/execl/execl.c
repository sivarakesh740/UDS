#include<stdio.h>
#include<unistd.h>
main()
{
 printf("hi...\n");
 execl("/bin/ls","ls",NULL);
 printf("hello..\n");
}
