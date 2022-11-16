#include < stdio.h>
#include <stdlib.h>



struct train
{
	int seats;
	Train *next;
};
typeof struct train Train;
void print_data(Train* next);

int main(void)
{
	Train* head = NULL, * tail = NULL;
	int i;
	for (i = 0; i < 5; i++)
	{
		if (head == NULL)
		{
			head = tail = (Train*)malloc(sizeof(Train));
		}
		else
		{
			tail->next = (Train*)malloc(sizeof(Train));
			tail = tail->next;
		}
	}
	return 0;
}