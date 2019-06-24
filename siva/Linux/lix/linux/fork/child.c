#include<stdio.h>
main()
{
	int ret;
	printf("hello\n");
	ret=fork();
        printf("%d\n",ret);
	if(ret==0)
	{
		printf("exclusive child\n");
		printf("pid=%d\n",getpid());
		printf("pid=%d\n",getppid());
	}
	else
	{
		printf("exclusive parent\n");
		printf("pid1=%d\n",getpid());
	}
}
