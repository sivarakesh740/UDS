#include<stdio.h>
main()
{ 
	printf("in main..\n");
	printf("current=%d\n",getpid());
	printf("parent=%d\n",getppid());
}
