#include<stdio.h>
#include<stdlib.h>

int cube(int n);

int main(void)
{
	int num = 5;
	printf("The original value of num is %d", num);

	num = cube(num);

	printf("\nThe new value of num is %d\n", num);

	system("pause");
}

int cube(int n)
{
	return n * n * n;
}