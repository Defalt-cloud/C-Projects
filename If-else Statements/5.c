#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// Write a program for identify wheather it uppercase, lowercase, special character, or digit
	char character;
	printf("Enter your character :");
	scanf("%c", &character);
	if (character >= 'a' && character <= 'z')
	{
		printf("Character is a lower case alphabet letter.");
	}
	else if (character >= 'A' && character <= 'Z')
	{
		printf("Character is a upper case alphabet letter.");
	}
	else if (character >= '0' && character <= '9')
	{
		printf("Character is a digit.");
	}
	else
	{
		printf("Character is a special character.");
	}
}