#include <string>
#include <iostream>

int main3(int argc, int** argv) {
	setlocale(LC_ALL, "ru");

	std::string str, character;
	std::cout << "Ваша строка: ";
	std::cin >> str;
	std::cout << "Ваш символ: ";
	std::cin >> character;

	std::cout << "Этот символ находится под индексом " << str.find(character);

	return 0;
}