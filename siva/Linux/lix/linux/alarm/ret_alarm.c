#include<stdio.h>
main()
{
	int ret;
	printf("test1...\n");
	ret=alarm(10);
	printf("ret1...=%d\n",ret);
	ret=alarm(5);
	printf("ret2...=%d\n",ret);
	ret=alarm(3);
	printf("ret4...=%d\n",ret);
}
