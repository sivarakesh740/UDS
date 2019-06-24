#include<stdio.h>
main()
{
  if(fork()==0)
  {
    int t1;
    //srand(getpid());
    srand(100);
    t1=rand()%10+1;
    printf("child process delay==%d\n",t1);
    sleep(t1);
    printf("child exit...\n");
  }
  else
  {
    int t2;
    // srand(getpid());
    srand(100);
    t2=rand()%10+1;
    printf("parent process delay==%d\n",t2);
    sleep(t2);
    printf("parent exit...\n");
  }
}
