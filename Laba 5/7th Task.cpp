#include <string>
#include <iostream>

int main7(int argc, int** argv) {
	setlocale(LC_ALL, "ru");

	std::string str, character;
	std::cout << "Ваша строка: ";
	std::cin >> str;
	std::cout << "Ваш символ: ";
	std::cin >> character;

	int i;

	while ((i = str.find(character)) != std::string::npos) {
		str.replace(i, character.length(), " ");
	}

	std::cout << "Результат: " << str;

	return 0;
}