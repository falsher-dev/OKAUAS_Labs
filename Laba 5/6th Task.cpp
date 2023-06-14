#include <string>
#include <iostream>

int main6(int argc, int** argv) {
	setlocale(LC_ALL, "ru");

	std::string str;

	std::cout << "Ваша строка: ";
	std::cin >> str;

	std::cout << "Строка в верхнем регистре: ";

	for (int i = 0; i < str.length();i++) {
		std::cout << (char) std::toupper(str[i]);
	}

	return 0;
}
