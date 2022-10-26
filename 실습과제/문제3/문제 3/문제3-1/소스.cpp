
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <memory.h>

int main()
{
	int m, n;

	srand((unsigned int)time(0));

	printf("행렬A와 B의 행과 열 수를 입력하세요 : ");
	scanf_s("%d %d", &m, &n);         //A,B의 값 입력

	int** pMat1 = (int**)malloc(sizeof(int*) * m);
	int** pMat2 = (int**)malloc(sizeof(int*) * n);
	int** pMatR = (int**)malloc(sizeof(int*) * m);

	for (int i = 0; i < n; ++i)
		pMat2[i] = (int*)malloc(sizeof(int) * m);

	for (int i = 0; i < m; ++i)
	{
		pMat1[i] = (int*)malloc(sizeof(int) * n);       //저장 공간 할당
		pMatR[i] = (int*)malloc(sizeof(int) * m);
	}

	for (int r = 0; r < m; ++r)
	{
		for (int c = 0; c < n; ++c)
		{
			pMat1[r][c] = rand() % 10; //0~9까지의 정수 랜덤값으로 행렬1을 채움
			pMat2[c][r] = rand() % 10; // 0~9까지의 정수 랜덤값으로 행렬2를 채움
		}
			memset(pMatR[r], 0, sizeof(int) * m); //0으로 행렬R 초기화
		
	}
	//행렬곱 계산

	for (int r = 0; r < m; r++)
	{
		for (int c = 0; c < m; c++)
		{
			for (int r2 = 0; r2 < n; r2++)
				pMatR[r][c] += pMat1[r][r2] * pMat2[r2][c];
		}
	}
	// A 행렬 출력
	printf("\n행렬 A\n");
	for (int r = 0; r < m; r++)
	{
		for (int c = 0; c < n; c++)
			printf("%d\t", pMat1[r][c]);

		printf("\n");
	}
	// B 행렬 출력
	printf("\n행렬 B\n");
	for (int r = 0; r < n; r++)
	{
		for (int c = 0; c < m; c++)
			printf("%d\t", pMat2[r][c]);

		printf("\n");
	}
	// 행렬 결과 출력
	printf("\n행렬 R (결과)\n");
	for (int r = 0; r < m; r++)
	{
		for (int c = 0; c < m; c++)
			printf("%d\t", pMatR[r][c]);

		printf("\n");
	}

	// 할당한 메모리 영역 반환
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
