#include<stdio.h>
#include<signal.h>
void isr(int n)
{
	printf("in isr\n");
}
main()
{
	struct sigaction v;
	signal(2,isr);
	sigaction(2,0,&v);
	if(v.sa_handler==SIG_DFL)
		printf("default...\n");
	else if(v.sa_handler==SIG_IGN)
		printf("ignore..\n");
	else
		printf("isr........\n");
	while(1);
}
