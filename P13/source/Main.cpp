#include<stdio.h>
#include<stdlib.h>

void cube(int &nptr);

int main(void)
{
	int num = 5;
	printf("The original value of num is %d", num);

	cube(num);

	printf("\nThe new value of num is %d\n", num);

	system("pause");
}

void cube(int &nptr)
{
	nptr = nptr * nptr * nptr;
}