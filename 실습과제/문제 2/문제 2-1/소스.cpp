#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define END_COND 999

// generating the seed number using the time clock information
void GenRandSeed()
{
	// generating the random number using the time seed
	srand((unsigned int)(time(NULL)));
	return;
}

// generating the random number
unsigned int GenRandNum(unsigned int nRange)
{
	unsigned int nRes = 0;
	unsigned int nNum = rand();
	nRes = ((unsigned int)(nNum) % (nRange));
	return nRes;
}

int main(void)
{
	// assigning seed
	GenRandSeed();

	// initializing variables
    int numbers[100] = {};
    int sum = 0, i, num;
    int average = 0;
    int variance = 0;
    int std_deviation = 0;
    int vari = 0;
   
   

    printf("Enter the number of random numbers: <<=100>: ");
    scanf_s("%d", &num);

    srand(time(NULL));
    for (i = 0; i < num; i++) {
        numbers[i] = rand() % 100;
    }

    for (i = 0; i < num; i++) {
        sum += numbers[i];
    }
    average = sum / num;

    
    for (int i = 0; i < num; i++)
    {
        vari += pow(numbers[i] - average, 2);

    }
    variance = vari/ num;
    std_deviation = sqrt(variance);

    printf("average:%d, variance: %d,std_deviation: %d \n", average, variance, std_deviation);
    printf("발생된 난수는 \n");

    for (i = 0; i < num; i++) {
        printf("%5d", numbers[i]);
        if (i % 5 == 4)
            printf("\n");
    }


	system("pause");
	return 0;

}

