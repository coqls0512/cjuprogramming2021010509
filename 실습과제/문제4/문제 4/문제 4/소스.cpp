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
	//변수 선언
	int a[n];
	int i;
	int sel = 0;

	choose(a);

	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);         //10개의 랜덤 숫자 출력
	}

	printf("\ndescending = 1\n ascending = 2\n Choose the number 1 or 2: ");
	scanf_s("%d", &sel);           // 선택된 숫자 입력

	if (sel == as)
	{
		int i, j, Num = 0;
		
		for (i = 0; i < n; i++)
		{
			for (j = i; j < n; j++)
			{
				if (a[i] < a[j]) //연달아 있는 두 수중 뒤에 있는 수가 크다면
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
				if (a[i] > a[j]) //연달아 있는 두 수중 앞에 있는 수가 크다면
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
		printf("%d ", a[i]);        // 결과값 출력
	}
	return 0;
}

