#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define END_COND 999

// �ð� �ð� ������ ����Ͽ� �õ� ��ȣ ����
void GenRandSeed()
{
	// �ð� �õ带 ����Ͽ� ���� ����
	srand((unsigned int)(time(NULL)));
	return;
}

// ���� ����
unsigned int GenRandNum(unsigned int nRange)
{
	unsigned int nRes = 0;
	unsigned int nNum = rand();
	nRes = ((unsigned int)(nNum) % (nRange));
	return nRes;
}

int main(void)
{
	// �õ� �Ҵ�
	GenRandSeed();

	
    int numbers[100] = {};              //���� ���� ����� �迭 �ʱ�ȭ
    int sum = 0, i, num;                
    int average = 0;                   // ��հ�, �л�, ǥ������ ���� ����� �ʱ�ȭ
    int variance = 0;
    int std_deviation = 0;
    int vari = 0;
   
   

    printf("Enter the number of integers to calculate: <<=100>: ");  //����� ���� ����: ���
    scanf_s("%d", &num);            // ���� ���� �Է�

    srand(time(NULL));
    for (i = 0; i < num; i++)           //i�� 0~num-1���� �����ϸ鼭 num�� �ݺ�
    {
        numbers[i] = rand() % 100;
    }

    for (i = 0; i < num; i++) 
    {
        sum += numbers[i];
    }
    average = sum / num;           //��հ� ���

    
    for (int i = 0; i < num; i++)
    {
        vari += pow(numbers[i] - average, 2);     

    }
    variance = vari/ num;         //�л갪 ���
    std_deviation = sqrt(variance);      //ǥ������ ���

    printf("average:%d, variance: %d,std_deviation: %d \n", average, variance, std_deviation);
    printf("�߻��� ������ \n");

    for (i = 0; i < num; i++) 
    {
        printf("%5d", numbers[i]);
        if (i % 5 == 4)
            printf("\n");
    }


	system("pause");
	return 0;

}

