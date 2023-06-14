#include <iostream>
int main() {
	int i = 1;
	do {
		std::cout << i++ << std::endl;
	} while (i <= 10);
	return 0;
}