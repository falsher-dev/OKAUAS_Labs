#include <string>
#include <iostream>

int main7(int argc, int** argv) {
	setlocale(LC_ALL, "ru");

	std::string str, character;
	std::cout << "���� ������: ";
	std::cin >> str;
	std::cout << "��� ������: ";
	std::cin >> character;

	int i;

	while ((i = str.find(character)) != std::string::npos) {
		str.replace(i, character.length(), " ");
	}

	std::cout << "���������: " << str;

	return 0;
}