#include<stdio.h>
#include<sys/wait.h>
#include<unistd.h>
#include<stdlib.h>
main()
{
	if(fork()==0)
	{
		printf("in child..pid=%d\n",getpid());
		sleep(5);
		printf("in child..exit \n");
		exit(0);
	}
	else
	{
		int stat;
		//waitpid(-1,&stat,WUNTRACED);
		//waitpid(-1,&stat,WHOHANG);
	        waitpid(-1,&stat,WCONTINUED);
		printf("stat=%d\n",stat);
	}
}

