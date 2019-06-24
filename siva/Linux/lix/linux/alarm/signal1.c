#include<stdio.h>
#include<signal.h>
void isr()
{

}
main()
{
	void (*ptr)(int);
	int n;
	signal(2,SIG_IGN);
	printf("enter the signal\n");
	scanf("%d",&n);
	ptr=signal(n,isr);
	signal(n,ptr);
	if(ptr==SIG_DFL)
		printf("defualt\n");
	else if(ptr==SIG_IGN)
		printf("ignored..\n");
	else
		printf("isr...\n");
}
