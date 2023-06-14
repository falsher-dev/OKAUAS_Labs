#include <string>
#include <iostream>

int main8(int argc, int** argv) {
	setlocale(LC_ALL, "ru");

	std::string str;
	std::cout << "Ваша строка: ";
	std::getline(std::cin, str);

	int counter = str[str.length() - 1] != ' ';

	int oldI = -1, i;

	while ((i = str.find(" ", oldI + 1)) != std::string::npos) {
		if (i - oldI != 1) counter++;
		oldI = i;
	}

	std::cout << "Число слов: " << counter;

	return 0;
}