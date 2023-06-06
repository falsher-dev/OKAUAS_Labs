#include <iostream>
int main15() {
	setlocale(LC_ALL, "ru");
	int num;
	std::cout << "Факториал числа: ";
	std::cin >> num;
	if (num < 1) {
		std::cout << "Допускаются только натуральные числа!";
		return 0;
	}
	int i = 2;
	int result = 1;
	do {
		result *= i++;
	} while (i <= num);
	std::cout << num << "! = " << result;
	return 0;
}