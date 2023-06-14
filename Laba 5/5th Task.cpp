#include <string>
#include <iostream>

std::string invert(std::string);

int main5(int argc, int** argv) {
	setlocale(LC_ALL, "ru");

	std::string str;

	std::cout << "Ваша строка: ";
	std::cin >> str;

	std::cout << "Инверсия строки: " << invert(str);

	return 0;
}

std::string invert(std::string source) {
	std::string result = source;
	for (int i = 0; i < source.length(); i++) {
		result[result.length() - 1 - i] = source[i];
	}
	return result;
}