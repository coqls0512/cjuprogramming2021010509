#include <stdio.h>

struct cracker
{
	int price;
	int calories;
};

int main(void)
{
	struct cracker basasak;
	printf("�ٻ���� ���ݰ� ������ �Է��ϼ���: ");
	scanf_s("%d%d", &basasak.price, &basasak.calories);
	printf("�ٻ���� ����: %d��\n", basasak.price);
	printf("�ٻ���� ���� : %d kcal\n", basasak.calories);
	return 0;
}
