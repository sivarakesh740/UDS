#include<stdio.h>
main()
{
 printf("hello\n");
 if(fork()==0)
 {
    printf("exclusive for child\n");
    printf("child=%d\n",getpid());
    printf("child ppid=%d\n",getppid());
    while(1);
 }
 else
 {
    printf("exclusive for parent\n");
    printf("parent=%d\n",getpid());
    printf("parent ppid=%d\n",getppid());
    while(1);
 }
}
