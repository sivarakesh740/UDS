#include<stdio.h>
#include<signal.h>
void isr(int n)
{
        void(*fp)(int);
        
	printf("in isr..\n");
	printf("n=%d\n",n);
	fp=signal(n,SIG_DFL);
	//fp=signal(n,SIG_DFL);
       if(fp==SIG_IGN)
       { 
           printf("ignore\n");
       }
      else  if(fp==SIG_DFL)
       {
            printf("default\n");
       }
       else
         printf("sig_user\n");

        printf("isr exit\n");
}
main()
{
	printf("hello..\n");
        signal(3,isr);
        signal(2,isr);
        while(1);
	printf("after signal..\n");
}
