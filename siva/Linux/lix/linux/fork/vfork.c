#include<stdio.h>
#include<unistd.h>
main()
{
 if(vfork()==0)
 {
  printf("in child..\n");
  sleep(3);
  printf("child exit..\n");
 }
 else
 {
 wait(0);
   printf("in parent..\n");
 }
}
 
