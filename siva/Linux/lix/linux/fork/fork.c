#include<stdio.h>
#include<unistd.h>
main()
{ 
 printf("hi...\n");
 fork();
 printf("hello..\n");
}
