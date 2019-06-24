#include<stdio.h>
main()
{ 
 char *ap[]={"ls","-ls",NULL};
 printf("hello...\n");
 //execv("/bin/ls",ap);
 execvp("ls",ap);
 printf("hi...\n");
}
