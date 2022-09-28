#include <stdio.h>
#include <stdlib.h>

#define AGETHRESH   20
int main(void)
{
	int nAge = 0;
	int nChestsize = 0;
	char chChestsize;

	printf("Input your age and chest size: \n");
	scanf_s("%d%d", &nAge, &nChestsize);

	int nMinChestsize = 0;
	int nMaxChestsize = 0;
	if (nAge > AGETHRESH)
	{
		nMinChestsize = 90;
		nMaxChestsize = 100;
	}
	else
	{
		nMinChestsize = 85;
		nMaxChestsize = 95;
	}
	if (nChestsize <= nMinChestsize)
	{
		chChestsize = 'S';
	}
	else if ((nChestsize > nMinChestsize) && (nChestsize <= nMaxChestsize))
	{
		chChestsize = 'M';
	}
	else
	{
		chChestsize = 'L';
	}

	printf("Your Age and Chest Size: %d, %c\n", nAge, chChestsize);

	system("pause");
	return 0;
}