#include <iostream>

int main1(int argc, char** argv) {
	const int SIZE = 10;
	int arr[SIZE];
	for (int i = 0; i < SIZE; i++) {
		arr[i] = rand();
	}
	std::cout << '[' << std::endl;
	for (int i : arr) {
		std::cout << '\t' << i << ',' << std::endl;
	}
	std::cout << ']';
	return 0;
}