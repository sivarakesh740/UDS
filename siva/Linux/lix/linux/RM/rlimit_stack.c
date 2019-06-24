#include<stdio.h>
#include<sys/time.h>
#include<sys/resource.h>
main()
{
	struct rlimit v;
	getrlimit(RLIMIT_STACK,&v);
	printf("soft=%d\n",(unsigned)v.rlim_cur);
	printf("hard=%u\n",(unsigned)v.rlim_max);
	v.rlim_cur=1000;
	setrlimit(RLIMIT_STACK,&v);
	getrlimit(RLIMIT_STACK,&v);
	printf("soft=%u\n",(unsigned)v.rlim_cur);
}
