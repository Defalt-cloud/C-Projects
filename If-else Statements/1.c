#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// Program For Find The Greatest Number Among the Given Three Numbers
	int num1, num2, num3;
	printf("> Enter Three Numbers\n");
	scanf_s("%d%d%d", &num1, &num2, &num3);// You can use scanf or scanf_s in this matter.
	if (num1 > num2 && num1 > num3)
	{
		printf("Greatest number among the three numbers : %d", num1);
	}
	else if (num2 > num1 && num2 > num3)
	{
		printf("Greatest number among the three numbers :%d", num2);
	}
	else 
	{
		printf("Greatest number among the three numbers : %d", num3);
	}
}