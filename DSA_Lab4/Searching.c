#include "Searching.h"
#include <stdio.h>

int linearSearch(char array[], int size, char key) {
	printf("Searching...\n");

	if (size < 1) {
		printf("The size is invalid");
		return -1;
	}

	// Iterate through every element until the key is found
	for (int i = 0; i < size; i++) {
		if (array[i] == key) {
			printf("\nKey found!");
			return 1;
		}
	}
	printf("\nKey missing.");
	// Return -1 if key is never found
	return -1;
}