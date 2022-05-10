#include <stdio.h>
#include <stdlib.h>

int main(void) {
	// A telecom has plan to generate coustomer bills at the end of the month.The details of each bill type are given below.
	// Write a program to input bill type,package type if it postpaid and number of units consumed.Then output final bill amount of the bill.
	// Bill-type                     Package-type              Monthly Rental               Unit-charge

	// Postpaid                          A                          500                        2(LKR)
	//                                   B                          800                        3(LKR)
	// Prepaid                                                        0                     3.50(LKR)

	int bt, pt, tot, units;
	printf("Please Enter Your Monthly Usage :");
	scanf_s("%d", &units);
	printf("> For Post-Paid bills : 1\n");
	printf("> For Pre-Paid bills : 2\n");
	printf("Please Enter Your Bill type :");
	scanf_s("%d", &bt);
	if (bt = 1)
	{
		printf("> For Package type A = 1\n");
		printf("> For Package type B = 2\n");
		printf("Please Enter Your Package type :");
		scanf_s("%d", &pt);
		if (pt = 1)
		{
			tot = (2 * units) + 500;
			printf("Your Monthly Bill :LKR %d", tot);
		}
		else
		{
			tot = (3 * units) + 800;
			printf("Your Monthly Bill :LKR %d", tot);
		}
	}
	else
	{
		tot = 3.50 * units;
		printf("Your Monthly Bill :LKR %d", tot);
	}


}

