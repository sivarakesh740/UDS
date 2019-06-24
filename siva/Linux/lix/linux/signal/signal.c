#include<stdio.h>
main(int argc,char *argv[])
{
 if(argc!=3)
 {
   printf("./a.out signal no pid\n");
   return;
 }
if(kill(atoi(argv[2],atoi(argv[1])))<0)
 perror("kill");
 printf("no %d signal send process %d\n",atoi(argv[1]),atoi(argv[2]));
}
