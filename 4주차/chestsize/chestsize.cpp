#include <stdio.h>
#include <stdlib.h>

#define MINCHESTSIZE 90
#define MAXCHESTSIZE 100

int main(void)
{
	int nchestsize = 0;
	char chchestsize;

	printf("Input your chest size: \n");
	scanf_s("%d", &nchestsize);

	if (nchestsize <= MINCHESTSIZE)
	{
		nchestsize = 'S';
	}
	else if ((nchestsize > MINCHESTSIZE) && (nchestsize <= MAXCHESTSIZE))
	{
		nchestsize = 'M';
	}
	else if (nchestsize > MAXCHESTSIZE)
	{
		nchestsize = 'L';
	}
	printf("Your chestsize is %c. \n", nchestsize);

	system("pause");

	return 0;

}
