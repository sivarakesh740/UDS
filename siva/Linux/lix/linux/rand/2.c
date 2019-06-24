#include<stdio.h>
main()
{
  srand(getpid());
 // srand(100);
  int i,r[5];
  for(i=0;i<5;i++)
  r[i]=rand()%100;
  for(i=0;i<5;i++)
  printf("%d ",r[i]);
}
