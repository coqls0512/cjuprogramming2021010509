#include <stdio.h>

struct book
{
	char title[50];
	char author[40];
	int page;
	int price;
};
int main(void)
{
	struct book b1 = { "�ƹ����� �ع�����", "������", 268, 13500 };
	struct book* bp = &b1;

	printf("title: %s\n", bp->title);
	printf("author: %s\n", bp->author);
	printf("page: %d\n", bp->page);
	printf("price: %d\n", bp->price);


	struct book b2 = { "������ ������", "��ȣ��", 268, 12600 };
	struct book *b2p = &b2;

	printf("title: %s\n", b2p->title);
	printf("author: %s\n", b2p->author);
	printf("page: %d\n", b2p->page);
	printf("price: %d\n", b2p->price);

	struct book b3 = { "�ߵ� ���ۿ� ���� �ʿ���", "�ּ���", 272, 14400 };
	struct book* b3p = &b3;
	printf("title: %s\n", b3p->title);
	printf("author: %s\n", b3p->author);
	printf("page: %d\n", b3p->page);
	printf("price: %d\n", b3p->price);


	return 0;
}
