#include<stdio.h>
#include<setjmp.h>
jmp_buf var;
main()
{ 
	int r; 
	printf("hello\n");
	r=setjmp(var);
	printf("r=%d\n",r);
	printf("after setjmp\n");
	printf("long imp going to called\n");
	sleep(2);
	longjmp(var,1);
	printf("after long jump..\n");
}
