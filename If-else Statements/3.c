#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// Write a program for character is vowel or consonant
	char letter;
	printf("> Enter Your Letter :");
	scanf_s("%c", &letter);
	if (letter == 'A' || letter == 'a' || letter == 'E' || letter == 'e' || letter == 'I' || letter == 'i' || letter == 'O' || letter == 'o' || letter == 'U' || letter == 'u')
	{
		printf("This letter is a vowel.");
	}
	else
	{
		printf("This letter is a consonant.");
	}
}