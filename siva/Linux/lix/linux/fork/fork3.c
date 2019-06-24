#include<stdio.h>
main()
{
 printf("1 before fork\n");
 fork();
 printf("2 after fork\n");
 fork();
 printf("3 after fork\n");
 fork();
 printf("4 after fork\n");
}
 
