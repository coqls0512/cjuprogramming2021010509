#include <stdio.h>
#include <string.h>


int main(void)
{

	char PW[80] = "0512";   // 비밀번호 변수 선언과 문자열 초기화
	char IP[80] = {};       // 입력받는 비밀번호 변수 선언과 문자열 초기화

	printf("Intput your password \n");   

	while (1)
	{
		printf("password:");
		scanf_s("%s", IP, 80);   //IP 변수에 문자 입력

			if (strcmp(PW,IP)==0)
			{
				printf("Normal Termination\n");
				break;
			}

			else
			{
				printf("Not matched. Retry\n");
			}
		}
	


	return 0;

}




