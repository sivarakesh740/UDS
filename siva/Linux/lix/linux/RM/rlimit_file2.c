#include<stdio.h>
#include<sys/time.h>
#include<sys/resource.h>
main()
{
	struct rlimit v;
	getrlimit(RLIMIT_FSIZE,&v);
	printf("soft=%u\n",(unsigned)v.rlim_cur);
	printf("hard=%u\n",(unsigned)v.rlim_max);
	v.rlim_cur=14;
	setrlimit(RLIMIT_FSIZE,&v);
	getrlimit(RLIMIT_FSIZE,&v);
	printf("soft=%u\n",(unsigned)v.rlim_cur);
	printf("hard=%u\n",(unsigned)v.rlim_max);
	FILE *fp;
	char a[2]="ab";
	fp=fopen("temp","w+");
	fprintf(fp,"%s",a);
}
