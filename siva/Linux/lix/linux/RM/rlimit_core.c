#include<stdio.h>
#include<sys/time.h>
#include<sys/resource.h>
main()
{
	struct rlimit v;
	getrlimit(RLIMIT_CORE,&v);
	printf("soft=%u\n",(unsigned)v.rlim_cur);
	printf("hard=%u\n",(unsigned)v.rlim_max);
	v.rlim_cur=100;
 	setrlimit(RLIMIT_CPU,&v);
	getrlimit(RLIMIT_CPU,&v);
	printf("soft=%u\n",(unsigned)v.rlim_cur);
        while(1);
}
