#include<stdio.h>
#include<sys/stat.h>
main(int argc,char* argv[])
{
	struct stat v;
	if(argc!=2)
	{
		printf("./a.out filename..\n");
		return;
	}
	if(stat(argv[1],&v)<0)
	{
		perror("stat");
		return;
	}
	printf("%ld\n",v.st_size);
	printf("%ld\n",v.st_ino);
}
