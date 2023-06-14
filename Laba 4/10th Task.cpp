#include <iostream>
#include <time.h>

int main10(int argc, char** argv) {
	const int MAX_VALUE = 0x7FFFFFFF;
	srand(time(NULL));

	const int SIZEX = 5;
	const int SIZEY = 5;
	int arr[SIZEX][SIZEY];
	for (int i = 0; i < SIZEX; i++) {
		for (int j = 0; j < SIZEY; j++) {
			arr[i][j] = rand() % (MAX_VALUE / (SIZEX * SIZEY));
		}
	}
	for (int i = 0; i < SIZEX; i++) {
		for (int j = 0; j < SIZEY; j++) {
			printf("%-8d", arr[i][j]);
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;

	int
		sum = 0,
		min = MAX_VALUE,
		max = 0;
	for (int i = 0; i < SIZEX; i++) {
		for (int j = 0; j < SIZEY; j++) {
			sum += arr[i][j];
		}
	}

	for (int i = 0; i < SIZEX; i++) {
		for (int j = 0; j < SIZEY; j++) {
			if (min > arr[i][j]) min = arr[i][j];
		}
	}

	for (int i = 0; i < SIZEX; i++) {
		for (int j = 0; j < SIZEY; j++) {
			if (max < arr[i][j]) max = arr[i][j];
		}
	}
	std::cout << "Sum: " << sum << std::endl;
	std::cout << "Min: " << min << std::endl;
	std::cout << "Max: " << max << std::endl;
	return 0;
}