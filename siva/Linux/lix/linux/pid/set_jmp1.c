#include<stdio.h>
#include<setjmp.h>
jmp_buf var;
void abc();
main()
{
 int r;
 printf("hello..\n"); 
 r=setjmp(var);
 printf("r=%d\n",r);
 printf("after setjmp..\n");
 printf("abc  fun going\n");
 abc();
 printf("after abc..\n");
}
void abc()
{
 printf("in abc func..\n");
 sleep(3);
 longjmp(var,1);
 printf("after the jump\n");
}
