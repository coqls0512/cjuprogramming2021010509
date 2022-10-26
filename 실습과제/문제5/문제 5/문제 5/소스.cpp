#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>



void GenRandSeed()                           //무작위 정수 생성 코드
{
	
	srand((unsigned int)(time(NULL)));
	return;
}


int main()
{
	// assigning seed
	GenRandSeed();

	int i = 0, count = 0;
	double r1, r2, x1[100], x2[100], a, b, c;
	printf("Accuracy rate calculation results: \n");

	//x1 정규분포 확률변수 100개 생성
	do {
	retry1:r1 = (double)rand() / 32767;        //rand() 최댓값: 32767
		r2 = (double)rand() / 32767;           //0~1 사이의 난수 발생

		a = sqrt(2 / exp(1.0)) * (2 * r2 - 1);
		c = a / r1;
		b = ((double)1 / 4) * c * c;

		if (b < 1 - r1)
		{
			x1[i] = c;
			i++;
		}
		else if ((b > (0.259 / r1) + 0.35) || (b > log(r1)))
			continue;  r1 = (double)rand() / 32767;
		               r2 = (double)rand() / 32767;

	} while (i < 100);
	i = 0;

	// x2 정규분포 확률변수 100개 생성
	do {
	retry2:r1 = (double)rand() / 32767;
		r2 = (double)rand() / 32767;

		a = sqrt(2 / exp(1.0)) * (2 * r2 - 1);
		c = a / r1;
		b = ((double)1 / 4) * c * c;

		if (b < 1 - r1)
		{
			x2[i] = c;
			i++;
		}
		else if ((b > (0.259 / r1) + 0.35) || (b > log(r1)))
			continue;  r1 = (double)rand() / 32767;
		r2 = (double)rand() / 32767;


	} while (i < 100);
	for (i = 0; i < 100; i++)
	{
		// 표적 안에 있는지 판단
		if ((0.8 * x1[i] >= -1.0 && 1.0 * x1[i] <= 1.0) && (1.2 * x2[i] >= -1.0 && 1.2 * x2[i] <= 1.0))
			count++;
	}

	printf("Success: %d/100 -> Probability of success: %.2lf == %.0f%%\n", count, ((double)count / 100), ((double)count / 100) * 100);
	return 0;

}
