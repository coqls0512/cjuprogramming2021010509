#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define n 10
#define m 100
#define as 1

void choose(int* ran);

void choose(int* ran)
{
	int i;
	for (i = 0; i < n; i++)
	{
		ran[i] = (rand() % m) + 1;
	}
}

int main(void)
{
	srand(time(NULL));
	int a[n];
	int i;
	int sel = 0;

	choose(a);

	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}

	printf("\ndescending = 1\n ascending = 2\n Choose the number 1 or 2: ");
	scanf_s("%d", &sel);

	if (sel == as)
	{
		int i, j, Num = 0;
		for (i = 0; i < n; i++)
		{
			for (j = i; j < n; j++)
			{
				if (a[i] < a[j])
				{
					Num = a[i];
					a[i] = a[j];
					a[j] = Num;
				}
			}
		}
	}
	else
	{
		int i, j, Num = 0;
		for (i = 0; i < n; i++)
		{
			for (j = i; j < n; j++)
			{
				if (a[i] > a[j])
				{
					Num = a[i];
					a[i] = a[j];
					a[j] = Num;
				}
			}
		}
	}

	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}

