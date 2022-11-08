#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(void)
{
	unsigned seed;  //난수초기화
	seed = time(0);
	srand(seed);    //난수초기화를 하지 않으면 같은 값만 나올 수 있음

	int answer = 0; //사용자가 입력한 숫자
	int ran;        // 컴퓨터가 처음 선택한 숫자
	int chance = rand() % 7 + 3 ; //3~10 사이의 숫자
	
	
	srand(time(NULL));
	ran = rand() % 100 + 1; // 1~100 사이의 숫자
	

	while (chance >0)
	{
		printf("기회는 %d 번 \n", chance--);
		printf("숫자를 입력하세요: \n");
		scanf_s("%d", &answer);
		if (answer > ran)    // 입력한 값이 컴퓨터가 정한 값 보다 클 때
		{
			printf("DOWN\n");
		}
		else if (answer < ran)    // 입력한 값이 컴퓨터가 정한 값 보다 작을 때
		{
			printf("UP\n");
		}
		else if (answer == ran)   // 입력한 값이 컴퓨터가 정한 값과 같을 때
		{
			printf("정답입니다!\n");
			break;
		}
		else 
		{
			printf("알 수 없는 오류가 발생했습니다 \n");
		}
		if (chance ==0)
		{
			printf("모든 기회를 사용하였습니다.\n");
			break;
		}
	}
}