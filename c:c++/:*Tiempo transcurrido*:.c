/*Tiempo transcurrido*/

#include<stdio.h>
#include<time.h>

int main ()
{
	time_t sec;
	sec=time (NULL);

	printf ("Number of hours since january 1, 1970 is %ld \n", sec/3600);
return 0;
}