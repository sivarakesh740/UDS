#include<stdio.h>
#include<signal.h>
void isr(int n)
{
	printf("in isr..\n");
}
main()
{
	int ret;
	signal(2,isr);
	printf("hello..\n");
	ret=pause();
	printf("ret=%d\n",ret);
	printf("after the process\n");
	printf("bye\n");
}
