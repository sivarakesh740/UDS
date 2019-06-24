#include<stdio.h>
#include<signal.h>
main()
{
 printf("pid=%d ppid=%d\n",getpid(),getppid());
 signal(1,SIG_IGN);
 while(1);
}
