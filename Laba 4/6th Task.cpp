#include <iostream>

int main6(int argc, char** argv) {

	const int
		SIZE1 = 5,
		SIZE2 = 4;
	int arr1[SIZE1] = {
		5,121,87,123,65
	};
	int arr2[SIZE2] = {
		35,51,8765,11
	};

	int concatenated[SIZE1 + SIZE2];
	
	int i = 0;
	while (i < SIZE1) {
		concatenated[i] = arr1[i];
	}
	while (i < SIZE2) {
		concatenated[i + SIZE1] = arr2[i];
	}

	return 0;
}