#include <iostream>
#include <time.h>

int main13(int argc, char** argv) {
	const int MAX_VALUE = 0x7FFFFFFF;
	srand(time(NULL));

	const int SIZEX = 5;
	const int SIZEY = 5;
	int arr[SIZEX][SIZEY];
	for (int i = 0; i < SIZEX; i++) {
		for (int j = 0; j < SIZEY; j++) {
			arr[i][j] = rand() % (MAX_VALUE / SIZEY);
		}
	}
	for (int i = 0; i < SIZEX; i++) {
		for (int j = 0; j < SIZEY; j++) {
			printf("%-8d", arr[i][j]);
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;

	std::cout << "Max: [";
	int max;
	for (int j = 0; j < SIZEY; j++) {
		max = 0;
		for (int i = 0; i < SIZEX; i++) {
			if (max < arr[i][j]) max = arr[i][j];
		}
		std::cout << max << ", ";
	}
	std::cout << ']' << std::endl;

	return 0;
}