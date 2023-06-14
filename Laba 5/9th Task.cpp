#include <string>
#include <iostream>

int main9(int argc, int** argv) {
	setlocale(LC_ALL, "ru");

	std::string str, character;
	std::cout << "Ваша строка: ";
	std::cin >> str;

	for (int i = str.length() / 2 - 1; i >= 0; i--) {
		if (str[i] != str[str.length() - 1 - i]) {
			std::cout << "Строка не является палиндромом!";
			return 0;
		}
	}

	std::cout << "Строка является палиндромом";
	return 0;
}