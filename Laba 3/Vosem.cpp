#include <iostream>
int main8() {
	setlocale(LC_ALL, "ru");
	int number;
	std::cout << "Введите число для проверки, является ли оно простым: ";
	std::cin >> number;
	if (number <= 0) {
		std::cout << "Принимаются только натуральные числа!";
		return 0;
	}
	else if (number == 1)
		std::cout << "Число не является ни простым, ни составным!";
	else if (!(number % 2))
		std::cout << "Все чётные числа являются составными!";
	for (int i = 3; i < number; i++)
		if (!(number % i)) {
			std::cout << "Число является составным!";
			return 0;
		}
	std::cout << "Число является простым!";
	return 0;
}