#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// Write a program for check number is even or odd
	int num,cal;
	printf("Enter your number :");
	scanf("%d", &num);
	// calucualting its a even or odd number
	cal = num % 2;
	if (cal > 0)
	{
		printf("Your number is a odd.");
	}
	else
	{
		printf("Your number is a even.");
	}
}