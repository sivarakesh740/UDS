#include<stdio.h>
#include<sys/stat.h>
main(int argc,char *argv[])
{
	struct stat v;
	if(argc!=2)
	{
		printf("./a.out filename\n");
		return;
	}
	lstat(argv[1],&v);
	if(S_ISREG(v.st_mode))
	{
		printf("regular file..\n");
	}
	else if(S_ISDIR(v.st_mode))
	{	
		printf("it is directory file..\n");
	}
	else if(S_ISLNK(v.st_mode))
	{  
		printf("it is a link file..\n");
	}	
	else 
		printf("it is pipe file..\n");
}
