#include<stdio.h>
main()
{
	if(fork()==0)
	{
		printf("in child process 1\n");
		//srand(getpid());
                srand(100);
		int t1=rand()%10+1;
		printf("child goes to delay=%d\n",t1);
		sleep(t1);
		exit(1);
	}
	else
	{
		if(fork()==0)
		{
			printf("in child process 2\n");
			//srand(getpid());
                        srand(100);
			int t2=rand()%10+1;
			printf("child goes to delay=%d\n",t2);
			sleep(t2);
			exit(2);
		}
		else
		{
			if(fork()==0)
			{
				printf("in child process 3\n");
			//	srand(getpid());
                                srand(100);
				int t3=rand()%10+1;
				printf("child goes to delay3=%d\n",t3);
				sleep(t3);
				exit(3);
			}
			else
			{
				int stat,ret;
				while((ret=wait(&stat))!=-1)
				{
					stat>>=8;
					if(stat==1)
						printf("child termination 1 \n");
					if(stat==2)
						printf("child termination 2\n");
					if(stat==3)
						printf("child termination 3\n");
				}
			}
		}
	}
}
