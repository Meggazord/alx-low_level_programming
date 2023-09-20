#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generate random password
 *
 * Return: 0
 */

char randomUppercaseLetter() 
{
	return 'A' + rand() % 26;
}

char randomDigit() 
{
	return '0' + rand() % 10;
}

int main() 
{
	int passwordLength = 8;
	char password[passwordLength + 1]; 


	srand(time(NULL));

	for (int i = 0; i < passwordLength; i++) 
	{
		int choice = rand() % 2; 

		if (choice == 0) 
		{
			password[i] = randomUppercaseLetter();
		} 
		else 
		{
			password[i] = randomDigit();
		}
	}

	password[passwordLength] = '\0';

	printf("Generated Password: %s\n", password);

	return 0;
}
