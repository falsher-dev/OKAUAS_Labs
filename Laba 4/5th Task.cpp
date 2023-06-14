#include <iostream>

int main5(int argc, char** argv) {
	const int SIZE = 10;
	int arr[SIZE] = {5,121,87,123,65,35,51,8765,11,44};

	int target = 35;

	int i = 0;

	while (i < SIZE && arr[i] != target) i++;

	if (i == SIZE) {
		std::cout << "Number " << target << " is not found in array";
	}
	else {
		std::cout << "arr[" << i << "] = " << target;
	}

	return 0;
}