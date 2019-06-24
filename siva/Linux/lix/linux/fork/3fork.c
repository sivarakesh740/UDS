#include<stdio.h>
main()
{
	if(fork()==0)
	{
		printf("in child..\n");
		printf("pid=%d\n",getpid());
		printf("ppid=%d\n",getppid());
	}
	else
	{
		if(fork()==0)
		{
			printf("in child2 pid=%d ppid=%d\n",getpid(),getppid());
		}
		else 
		{
			if(fork()==0)
			{
				printf("in child3 pid=%d ppid=%d\n",getpid(),getppid());
			}
			else
			{
				while(1);
			}
		}
	}
}
