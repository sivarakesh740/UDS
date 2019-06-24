#include<stdio.h>
#include<signal.h>
void isr(int n)
{
	printf("in isr..\n");
}
main()
{
	struct sigaction v;
	v.sa_handler=SIG_IGN;
	sigemptyset(&v.sa_mask);
	v.sa_flags=0;
	sigaction(2,&v,0);
	while(1);
}
