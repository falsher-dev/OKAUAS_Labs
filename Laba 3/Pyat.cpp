#include <iostream>
int main5() {
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
	while (i <= num)
		result *= i++;
	std::cout << num << "! = " << result;
	return 0;
}