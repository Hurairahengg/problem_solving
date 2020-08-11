#include <stdio.h>
void main()
{
	char Grade;
		printf("What is your Grade?");
		scanf(" %c", &Grade);
			switch(Grade) {
				case 'a':
					printf("Ecxellent!");
					break;
				case 'b':
					printf("Well Done\n");
					break;
				case 'c':
					printf("Done\n");
				case 'd':
					printf("Good\n");
					break;
				case 'f':
					printf("Try again\n");
					break;
				default:
					printf("Error...\n");
					printf("Your grade is: unknown");
			}
}

