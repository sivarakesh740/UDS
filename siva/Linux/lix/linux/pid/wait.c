#include<stdio.h>
main()
{
 int x;
 printf("in main...\n");
 printf("pid=%d\n",getpid());
 scanf("%d",&x);
 printf("x=%d\n",x);
 while(1);
}

