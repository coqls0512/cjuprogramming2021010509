#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(void)
{
	unsigned seed;  //�����ʱ�ȭ
	seed = time(0);
	srand(seed);    //�����ʱ�ȭ�� ���� ������ ���� ���� ���� �� ����

	int answer = 0; //����ڰ� �Է��� ����
	int ran;        // ��ǻ�Ͱ� ó�� ������ ����
	int chance = rand() % 7 + 3 ; //3~10 ������ ����
	
	
	srand(time(NULL));
	ran = rand() % 100 + 1; // 1~100 ������ ����
	

	while (chance >0)
	{
		printf("��ȸ�� %d �� \n", chance--);
		printf("���ڸ� �Է��ϼ���: \n");
		scanf_s("%d", &answer);
		if (answer > ran)    // �Է��� ���� ��ǻ�Ͱ� ���� �� ���� Ŭ ��
		{
			printf("DOWN\n");
		}
		else if (answer < ran)    // �Է��� ���� ��ǻ�Ͱ� ���� �� ���� ���� ��
		{
			printf("UP\n");
		}
		else if (answer == ran)   // �Է��� ���� ��ǻ�Ͱ� ���� ���� ���� ��
		{
			printf("�����Դϴ�!\n");
			break;
		}
		else 
		{
			printf("�� �� ���� ������ �߻��߽��ϴ� \n");
		}
		if (chance ==0)
		{
			printf("��� ��ȸ�� ����Ͽ����ϴ�.\n");
			break;
		}
	}
}