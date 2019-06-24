#include<stdio.h>
main()
{ 
  srand(getpid());
  int r1,r2;
  r1=rand()%1000 ;
  r2=rand()%1000 ;
  printf("r=%d\n r2 = %d\n",r1,r2);
}
