#include <stdio.h>

struct marriage
{
	char name[30];
	int age;
	char sex;
	double height;
};
struct marriage m1 = { "Ã¤ºó", 21, 'f', 163.5 };
struct marriage* mp = &m1;

int main(void)
{
	printf("name : %s\n", mp->name);
	printf("age : %d\n", mp->age);
	printf("sex : %c\n", mp->sex);
	printf("height : %.1lf\n", mp->height);

	return 0;
}