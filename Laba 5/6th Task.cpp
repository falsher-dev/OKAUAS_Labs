#include <string>
#include <iostream>

int main6(int argc, int** argv) {
	setlocale(LC_ALL, "ru");

	std::string str;

	std::cout << "���� ������: ";
	std::cin >> str;

	std::cout << "������ � ������� ��������: ";

	for (int i = 0; i < str.length();i++) {
		std::cout << (char) std::toupper(str[i]);
	}

	return 0;
}
