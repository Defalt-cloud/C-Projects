#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// Write a program for a character is an alphabet or not
	// The ASCII value of the lowercase alphabet is from 97 to 122. And, the ASCII value of the uppercase alphabet is from 65 to 90.
	// If the ASCII value of the character entered by the user lies in the range of 97 to 122 or from 65 to 90, that number is an alphabet.
	int letter;
	printf("Enter your letter :");
	scanf_s("%c", &letter);
	if ((letter >= 'a' && letter <= 'z') || (letter >= 'A' && letter <= 'Z'))
	{
		printf("Your letter in the alphabet.");
	}
	else
	{
		print("Your letter is not in the alphabet.");
	}
}