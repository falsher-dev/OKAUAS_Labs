#include <iostream>

int main8(int argc, char** argv) {
	const int SIZE = 10;
	int arr[SIZE] = { 11,121,44,11,65,121,51,8765,11,44 };
	int removed = 0;
	int curNumberDublicates;

	for (int i = 0; i < SIZE - removed; i++) {
		curNumberDublicates = 0;
		for (int j = i + 1; j < SIZE - removed - curNumberDublicates; j++) {
			if (arr[i] == arr[j + curNumberDublicates]) curNumberDublicates++;
			if (curNumberDublicates && j < SIZE - 1) {
				arr[j] = arr[j + curNumberDublicates];
			}
		}
		removed += curNumberDublicates;
	}

	std::cout << '[' << std::endl;
	for (int i = 0; i < SIZE - removed; i++) {
		std::cout << '\t' << arr[i] << ',' << std::endl;
	}
	std::cout << ']' << std::endl;

	return 0;
}