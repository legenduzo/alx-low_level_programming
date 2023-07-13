#include <stdio.h>
#include <string.h>
/**
 * This function prints the text
 * 'Programming is like building a multilingual puzzle'
 */

int main(void)
{
	char message[] = "Programming is like building a multilingual puzzle";
	char newLine[] = "\n";

	strcat(message,newLine);

	puts(message);

	return 0;
}
