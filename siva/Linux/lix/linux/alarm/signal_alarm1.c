#include<stdio.h>
#include<signal.h>
int c,d;
void isr(int n)
{
        printf("isr function\n");
	if(n==2)
	{
                printf("int 2");
		c++;
		if(c==2)
			signal(2,SIG_IGN);
	}
	else if(n==3)
	{
		d++;
                printf("int 3");
		if(d==2)
			signal(3,SIG_DFL);
       }
}
	main()
	{
                printf("hello..\n");
		signal(SIGINT,isr);
		signal(SIGQUIT,isr);
		while(1);
	}
