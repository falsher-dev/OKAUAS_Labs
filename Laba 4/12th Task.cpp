#include <iostream>
#include <time.h>

int main12(int argc, char** argv) {
	srand(time(NULL));

	const int SIZEX = 5;
	const int SIZEY = 5;
	int arr[SIZEX][SIZEY];
	for (int i = 0; i < SIZEX; i++) {
		for (int j = 0; j < SIZEY; j++) {
			arr[i][j] = rand();
		}
	}
	for (int i = 0; i < SIZEX; i++) {
		for (int j = 0; j < SIZEY; j++) {
			printf("%-8d", arr[i][j]);
		}
		std::cout << std::endl;
	}
	std::cout
		<< std::endl
		<< "Diagonal elements: [";
	const int MIN_SIZE = (SIZEX < SIZEY) ? SIZEX : SIZEY;
	for (int i = 0; i < MIN_SIZE; i++) {
		std::cout << arr[i][i] << ", ";
	}
	std::cout << ']';
	return 0;
}