#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int i = 0, count = 0;
	double r1, r2, x1[100], x2[100], v, k, z;
	printf("Accuracy rate calculation results: \n");

	
	do {
	retry1:r1 = (double)rand() / 32767;
		r2 = (double)rand() / 32767;

		v = sqrt(2 / exp(1.0)) * (2 * r2 - 1);
		z = v / r1;
		k = ((double)1 / 4) * z * z;

		if (k < 1 - r1)
		{
			x1[i] = z;
			i++;
		}
		else if ((k > (0.259 / r1) + 0.35) || (k > log(r1)))
			goto retry1;
	} while (i < 100);
	i = 0;

	
	do {
	retry2:r1 = (double)rand() / 32767;
		r2 = (double)rand() / 32767;

		v = sqrt(2 / exp(1.0)) * (2 * r2 - 1);
		z = v / r1;
		k = ((double)1 / 4) * z * z;

		if (k < 1 - r1)
		{
			x2[i] = z;
			i++;
		}
		else if ((k > (0.259 / r1) + 0.35) || (k > log(r1)))
			goto retry2;

	} while (i < 100);
	for (i = 0; i < 100; i++)
	{
		
		if ((0.8 * x1[i] >= -1.0 && 1.0 * x1[i] <= 1.0) && (1.2 * x2[i] >= -1.0 && 1.2 * x2[i] <= 1.0))
			count++;
	}

	printf("Success: %d/100 -> Probability of success: %.3lf == %.0f%%\n", count, ((double)count / 100), ((double)count / 100) * 100);
	return 0;

}
