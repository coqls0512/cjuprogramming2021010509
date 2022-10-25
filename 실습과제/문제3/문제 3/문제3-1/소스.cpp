
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <memory.h>

int main()
{
	int m, n;

	srand((unsigned int)time(0));

	printf("행렬A와 B의 행과 열 수를 입력하세요 : ");
	scanf_s("%d %d", &m, &n);

	int** pMat1 = (int**)malloc(sizeof(int*) * m);
	int** pMat2 = (int**)malloc(sizeof(int*) * n);
	int** pMatR = (int**)malloc(sizeof(int*) * m);

	for (int i = 0; i < n; ++i)
		pMat2[i] = (int*)malloc(sizeof(int) * m);

	for (int i = 0; i < m; ++i)
	{
		pMat1[i] = (int*)malloc(sizeof(int) * n);
		pMatR[i] = (int*)malloc(sizeof(int) * m);
	}

	for (int r = 0; r < m; ++r)
	{
		for (int c = 0; c < n; ++c)
		{
			pMat1[r][c] = rand() % 10;
			pMat2[c][r] = rand() % 10;
			memset(pMatR[r], 0, sizeof(int) * m);
		}
	}


	for (int r = 0; r < m; r++)
	{
		for (int c = 0; c < m; c++)
		{
			for (int r2 = 0; r2 < n; r2++)
				pMatR[r][c] += pMat1[r][r2] * pMat2[r2][c];
		}
	}

	printf("\n행렬 1\n");
	for (int r = 0; r < m; r++)
	{
		for (int c = 0; c < n; c++)
			printf("%d\t", pMat1[r][c]);

		printf("\n");
	}

	printf("\n행렬 2\n");
	for (int r = 0; r < n; r++)
	{
		for (int c = 0; c < m; c++)
			printf("%d\t", pMat2[r][c]);

		printf("\n");
	}

	printf("\n행렬 R (결과)\n");
	for (int r = 0; r < m; r++)
	{
		for (int c = 0; c < m; c++)
			printf("%d\t", pMatR[r][c]);

		printf("\n");
	}

	for (int i = 0; i < n; ++i)
		free(pMat2[i]);

	for (int i = 0; i < m; ++i)
	{
		free(pMat1[i]);
		free(pMatR[i]);
	}

	free(pMat1);
	free(pMat2);
	free(pMatR);

	return 0;
}
