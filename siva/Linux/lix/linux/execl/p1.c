#include<stdio.h>
main()
{
 printf("pid=%d ppid=%d\n",getpid(),getppid());
 system("cal");
 execl("cal","cal",NULL);
}

