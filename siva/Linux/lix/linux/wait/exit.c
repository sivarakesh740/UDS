#include<stdio.h>
void abc(void);
main()
{
	printf("hi...\n");
	abc();
	printf("hello..\n");
}
void abc(void)
{
	printf("in abc..\n");
//	return;
        exit(1);
//        while(1); 
	printf("after return\n");
}
