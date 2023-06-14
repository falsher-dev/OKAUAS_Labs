#include <iostream>

int main7(int argc, char** argv) {
	const int MAX_VALUE = 0x7FFFFFFF;
	srand(time(NULL));

	const int SIZE = 9;
	int arr[SIZE];
	for (int i = 0; i < SIZE; i++) {
		arr[i] = rand() % (MAX_VALUE / SIZE);
	}
	std::cout << "Source: [" << std::endl;
	for (int i : arr) {
		std::cout << '\t' << i << ',' << std::endl;
	}
	std::cout << ']' << std::endl;

	int buf;

	for (int i = 0; i < SIZE / 2; i++) {
		buf = arr[i];
		arr[i] = arr[SIZE - 1 - i];
		arr[SIZE - 1 - i] = buf;
	}

	std::cout << "Reversed: [" << std::endl;
	for (int i : arr) {
		std::cout << '\t' << i << ',' << std::endl;
	}
	std::cout << ']' << std::endl;

	return 0;
}