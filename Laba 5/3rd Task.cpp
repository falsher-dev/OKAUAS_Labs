#include <string>
#include <iostream>

int main3(int argc, int** argv) {
	setlocale(LC_ALL, "ru");

	std::string str, character;
	std::cout << "���� ������: ";
	std::cin >> str;
	std::cout << "��� ������: ";
	std::cin >> character;

	std::cout << "���� ������ ��������� ��� �������� " << str.find(character);

	return 0;
}