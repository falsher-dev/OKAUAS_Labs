#include <iostream>
#include <time.h>

int main11(int argc, char** argv) {
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


	std::cout << "Averages: [";
	int sum;
	for (int i = 0; i < SIZEX; i++) {
		sum = 0;
		for (int j = 0; j < SIZEY; j++) {
			sum += arr[i][j];
		}
		printf("%10.10g, ", ((double) sum / SIZEY));
	}
	std::cout << ']' << std::endl;

	return 0;
}