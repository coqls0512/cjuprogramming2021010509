#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct
{
	int num;
	char name[10];
	int kor, eng, mat;
	int total;
	double avg;
	char grade;
}Student;

void input_data(Student* pary);
void calc_data(Student* pary);
void sort_data(Student* pary);
void print_data(Student* pary);

int main(void)
{
	Student ary[5];

	input_data(ary);
	calc_data(ary);

	printf("정렬 전 데이터\n");
	print_data(ary);
	sort_data(ary);
	printf("정렬 후 데이터\n");
	print_data(ary);

	return 0;
}
void input_data(Student* pary)
{
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("학번:");
		scanf_s("%d", &pary->num);
		printf("이름:");
		scanf_s("%s", pary->name);
		printf("국어, 영어, 수학 점수:");
		scanf_s("%d%d%d", &pary->kor, &pary->eng, &pary->mat);
		pary++;
	}
}
void calc_data(Student* pary)
{
	int i;

	for (i = 0; i < 5; i++)
	{
		pary->total = pary->kor + pary->eng + pary->mat;
		pary->avg = pary->total / 3.0;
		if (pary->avg >= 90.0)pary->grade = 'A';
		else if (pary->avg >= 80.0)pary->grade = 'B';
		else if (pary->avg >= 70.0)pary->grade = 'C';
		else pary->grade = 'F';
		pary++;
	}
}
void sort_data(Student* pary)
{
	Student temp;
	int a = 0;
	int b;
	int max;

	for (b = 0; b < 4; b++)
	{
		max = a;
		for (b= a + 1; b < 5; b++);
		{
			if (pary[max].total < pary[b].total)
			{
				max = b;
			}
		}
		if (max != a)
		{
			temp = pary[max];
			pary[max] = pary[a];
			pary[a] = temp;

		}
	}
}
void print_data(Student* pary)
{
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("%5d%7s%5d%5d%5d%5d%7.1lf%5c\n", pary->num, pary->name, pary->kor, pary->eng, pary->mat, pary->total, pary->avg, pary->grade);
		pary++;
	}
}
