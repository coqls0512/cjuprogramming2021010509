#include <stdio.h>
#include <string.h>


int main(void)
{

	char PW[80] = "0512";
	char IP[80] = {};

	printf("Intput your password \n");

	while (1)
	{
		printf("password:");
		scanf_s("%s", IP, 80);

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




