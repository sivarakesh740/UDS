#include<stdio.h>
main()
{
 int x; 
 printf("in main\n");
 printf("pid=%d\n",getpid());
 printf("process enter in delay state\n");
 sleep(8);
 printf("Delay completed\n");
 while(1);
}
