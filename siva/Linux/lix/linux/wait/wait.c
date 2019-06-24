#include<stdio.h>
main()
{
	if(fork()==0)
	{ 
		printf("in child..\n");
		sleep(5);
		printF("child exit..\n");
		exit(0);
	}
	else
	{
		int stat;
		wait(&stat);
		printf("stat=%d\n",stat);
		while(1);
	}
}
