#include <stdio.h>

struct cracker
{
	int price;
	int calories;
};

int main(void)
{
	struct cracker basasak;
	printf("바사삭의 가격과 열량을 입력하세요: ");
	scanf_s("%d%d", &basasak.price, &basasak.calories);
	printf("바사삭의 가격: %d원\n", basasak.price);
	printf("바사삭의 열량 : %d kcal\n", basasak.calories);
	return 0;
}
