
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <memory.h>

int main()
{
	int m, n;

	srand((unsigned int)time(0));

	printf("���A�� B�� ��� �� ���� �Է��ϼ��� : ");
	scanf_s("%d %d", &m, &n);         //A,B�� �� �Է�

	int** pMat1 = (int**)malloc(sizeof(int*) * m);
	int** pMat2 = (int**)malloc(sizeof(int*) * n);
	int** pMatR = (int**)malloc(sizeof(int*) * m);

	for (int i = 0; i < n; ++i)
		pMat2[i] = (int*)malloc(sizeof(int) * m);

	for (int i = 0; i < m; ++i)
	{
		pMat1[i] = (int*)malloc(sizeof(int) * n);       //���� ���� �Ҵ�
		pMatR[i] = (int*)malloc(sizeof(int) * m);
	}

	for (int r = 0; r < m; ++r)
	{
		for (int c = 0; c < n; ++c)
		{
			pMat1[r][c] = rand() % 10; //0~9������ ���� ���������� ���1�� ä��
			pMat2[c][r] = rand() % 10; // 0~9������ ���� ���������� ���2�� ä��
		}
			memset(pMatR[r], 0, sizeof(int) * m); //0���� ���R �ʱ�ȭ
		
	}
	//��İ� ���

	for (int r = 0; r < m; r++)
	{
		for (int c = 0; c < m; c++)
		{
			for (int r2 = 0; r2 < n; r2++)
				pMatR[r][c] += pMat1[r][r2] * pMat2[r2][c];
		}
	}
	// A ��� ���
	printf("\n��� A\n");
	for (int r = 0; r < m; r++)
	{
		for (int c = 0; c < n; c++)
			printf("%d\t", pMat1[r][c]);

		printf("\n");
	}
	// B ��� ���
	printf("\n��� B\n");
	for (int r = 0; r < n; r++)
	{
		for (int c = 0; c < m; c++)
			printf("%d\t", pMat2[r][c]);

		printf("\n");
	}
	// ��� ��� ���
	printf("\n��� R (���)\n");
	for (int r = 0; r < m; r++)
	{
		for (int c = 0; c < m; c++)
			printf("%d\t", pMatR[r][c]);

		printf("\n");
	}

	// �Ҵ��� �޸� ���� ��ȯ
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
