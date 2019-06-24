#include<stdio.h>
#include<signal.h>
void isr(int n)
{
	printf("in isr..\n");
}
void isr1(int n)
{
  printf("alarm\n");
}
main()
{
	printf("hello..\n");
	alarm(5);
	printf("hi..\n");
	signal(2,isr);
	signal(SIGALRM,isr1);
        while(1);
}
