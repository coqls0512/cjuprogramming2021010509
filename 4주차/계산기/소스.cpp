#include <stdio.h>

int main(void)
{
	int num1, num2, res;
	char op;

	printf("Input your arithmetic operation:\n");
	scanf_s("%d %c %d", &num1, &op, 1, &num2);


	if (op == '+')
	{
		res =num1 + num2;
	}
	else if (op == '-')
	{
		res =num1 - num2;
	}
	else if (op == '*')
	{
		res=num1 * num2;
	}
	else if (op == '/')
	{
		res=num1/num2;
	}



	printf(" %d%c%d = %d \n", num1, op, num2,res);
	return 0;

}

