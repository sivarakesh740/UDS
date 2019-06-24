#include<stdio.h>
#include<signal.h>
void isr(int n)
{
	printf("in isr..\n");
        alarm(2);
}
main()
{
	printf("hello..\n");
	alarm(5);
	signal(SIGALRM,isr);
        printf("hi...\n");
        while(1);
}
