#include<stdio.h>
#include<time.h>
#include<stdlib.h>
main()
{
	time_t t;
	for(;;)
	{
		time(&t);
		printf("%d\n",t);
		printf("%s\n",ctime(&t));
		sleep(1);
		system("clear");
	}
}
