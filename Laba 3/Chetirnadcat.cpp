#include <iostream>
int main14() {
	int i, j;
	i = 1;
	do {
		j = 1;
		do {
			std::cout << i << " * " << j << " = " << i * j << std::endl;
			j++;
		} while (j <= 10);
		std::cout << std::endl;
		i++;
	} while (i <= 10);
	return 0;
}