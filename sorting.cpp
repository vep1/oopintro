#include "sorting.h"
#include <iostream>

void sorting(int k) {
	int grid [4][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16 };
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (grid[i][j] == k) {
				std::cout << "Found it!\n";
				//return;
			}
		}
	}
	std::cout << "Your number was not found.\n";
}