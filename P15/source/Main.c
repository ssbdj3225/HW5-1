#include<stdio.h>
#include<stdlib.h>
#define abc 10
void bub(int * const array, const int size );

int main(void)
{
	int i, a[abc] = { 2,6,4,8,10,12,89,68,45,37 };

	printf("Data items in original order\n");

	for (i = 0; i < abc; i++)
		printf("%4d", a[i]);

	bub(a, abc);

	printf("\nData in items in ascending order\n");

	for (i = 0; i < abc; i++)
		printf("%4d", a[i]);

	printf("\n");

	system("pause");
}

void bub(int * const array, const int size)
{
	void swap(int *element1ptr, int *element2ptr);

	int pass, j;

	for (pass = 0; pass < abc - 1; pass++)
	{
		for (j = 0; j < abc - 1; j++)
		{
			if (array[j] > array[j + 1])
				swap(&array[j], &array[j + 1]);
		}
	}
}

void swap(int *element1ptr, int *element2ptr)
{
	int hold = *element1ptr;
	*element1ptr = *element2ptr;
	*element2ptr = hold;
}