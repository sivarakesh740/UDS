#include<stdio.h>
main(int argc,char *argv[],char *env[])
{
 int i;
 printf("before image replacent\n");
 for(i=0;env[i];i++)
 {
   printf("%s\n",env[i]);
   sleep(2);
 }
 printf("after image replacemnet \n");
 execlp("exe","exe",NULL);
}
