#include <iostream>

int main4(int argc, char** argv) {
	const int MAX_VALUE = 0x7FFFFFFF;
	srand(time(NULL));

	const int SIZE = 10;
	int arr[SIZE];
	for (int i = 0; i < SIZE; i++) {
		arr[i] = rand() % (MAX_VALUE / SIZE);
	}
	std::cout << '[' << std::endl;
	for (int i : arr) {
		std::cout << '\t' << i << ',' << std::endl;
	}
	std::cout << ']' << std::endl;
	int sum = 0;
	for (int i : arr)
		sum += i;

	std::cout << "Average: " << ((double) sum / SIZE);

	return 0;
}