#include <iostream>
int main() {
	int i,j;
	i = 1;
	while (i <= 10) {
		j = 1;
		while (j <= 10) {
			std::cout << i << " * " << j << " = " << i * j << std::endl;
			j++;
		}
		std::cout << std::endl;
		i++;
	}
	return 0;
}