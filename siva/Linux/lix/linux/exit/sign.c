#include<stdio.h>
int i=1;
main()
{
	printf("hello..\n");
		vfork();
		i++;
		printf("i=%d pid=%d\n",i,getpid());
			exit(0);
}
