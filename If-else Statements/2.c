#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// Write a program for recognized the number is positive or negative
	float num;
	printf("> Enter Your Number :");
	scanf_s("%f", &num);
	if (num < 0)
	{
		printf("Your Number is Negative.");
	}
	else
	{
		printf("Your Number is Postive or Zero.");
	}
}