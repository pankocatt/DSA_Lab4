// Dina Makhdoom & Liam Cabarle
// DSA Lab 4, Searching

#include "Searching.h"
#include <stdio.h>
#include <time.h>

// Linear search 
// The time complexity for linear search is O(n) as it lacks nested loops and depends entirely on the length of the array that's being used.
// This search algorithm is horrible for large data sets, as the worst case causes the algorithm to search through the entire array start until finish
// in order to reach a conclusion.

int main(void) {

	char characterArray[10] = { 'A', 'A', 'A' };
	char randomLetter;

	srand(time(NULL));

	// Generating a random array
	/*for (int i = 0; i < 9; i++) {
		randomLetter = 'A' + rand() % 26;
		characterArray[i] = randomLetter;
	}*/

	// Printing array
	printf("Array: ");
	for (int i = 0; i < 9; i++) {
		printf("%c, ", characterArray[i]);
	}

	// Printing key
	/*randomLetter = 'A' + rand() % 26;*/
	char key = 'A';
	printf("\nKey: %c\n", key);

	linearSearch(characterArray, 3, key);

	return 0;
}