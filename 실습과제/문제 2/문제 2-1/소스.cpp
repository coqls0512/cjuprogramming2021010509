#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define END_COND 999

// 시간 시계 정보를 사용하여 시드 번호 생성
void GenRandSeed()
{
	// 시간 시드를 사용하여 난수 생성
	srand((unsigned int)(time(NULL)));
	return;
}

// 난수 생성
unsigned int GenRandNum(unsigned int nRange)
{
	unsigned int nRes = 0;
	unsigned int nNum = rand();
	nRes = ((unsigned int)(nNum) % (nRange));
	return nRes;
}

int main(void)
{
	// 시드 할당
	GenRandSeed();

	
    int numbers[100] = {};              //난수 변수 선언과 배열 초기화
    int sum = 0, i, num;                
    int average = 0;                   // 평균값, 분산, 표준편차 변수 선언과 초기화
    int variance = 0;
    int std_deviation = 0;
    int vari = 0;
   
   

    printf("Enter the number of integers to calculate: <<=100>: ");  //계산할 정수 갯수: 출력
    scanf_s("%d", &num);            // 정수 갯수 입력

    srand(time(NULL));
    for (i = 0; i < num; i++)           //i가 0~num-1까지 증가하면서 num번 반복
    {
        numbers[i] = rand() % 100;
    }

    for (i = 0; i < num; i++) 
    {
        sum += numbers[i];
    }
    average = sum / num;           //평균값 계산

    
    for (int i = 0; i < num; i++)
    {
        vari += pow(numbers[i] - average, 2);     

    }
    variance = vari/ num;         //분산값 계산
    std_deviation = sqrt(variance);      //표준편차 계산

    printf("average:%d, variance: %d,std_deviation: %d \n", average, variance, std_deviation);
    printf("발생된 난수는 \n");

    for (i = 0; i < num; i++) 
    {
        printf("%5d", numbers[i]);
        if (i % 5 == 4)
            printf("\n");
    }


	system("pause");
	return 0;

}

