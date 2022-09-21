#include <stdio.h>

int main(void)
{
	char ch;

	printf("Character input : ");
	scanf_s("%c", &ch);
	printf("%c The ASCII code value of the character is %d .\n", ch, ch);


	return 0;
}

