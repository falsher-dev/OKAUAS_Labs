#include <iostream>

int main3(int argc, char** argv) {
	const int MAX_VALUE = 0x7FFFFFFF;
	srand(time(NULL));

	const int SIZE = 10;
	int arr[SIZE];
	for (int i = 0; i < SIZE; i++) {
		arr[i] = rand() % (MAX_VALUE / SIZE);
	}
	std::cout << "Source: [" << std::endl;
	for (int i : arr) {
		std::cout << '\t' << i << ',' << std::endl;
	}
	std::cout << ']' << std::endl;

	std::qsort(
		arr,
		SIZE,
		sizeof(int),
		[](const void* x1, const void* x2) {
			return (*(int*) x1 - *(int*) x2);
		}
	);

	std::cout << "Sorted: [" << std::endl;
	for (int i : arr) {
		std::cout << '\t' << i << ',' << std::endl;
	}
	std::cout << ']' << std::endl;

	return 0;
}