#include<stdio.h>
#include<sys/time.h>
#include<sys/resource.h>
main()
{
	struct rlimit v;
        getrlimit(RLIMIT_FSIZE,&v);
	printf("soft=%u\n",(unsigned)v.rlim_cur);
	printf("hard=%u\n",(unsigned)v.rlim_max);
}
