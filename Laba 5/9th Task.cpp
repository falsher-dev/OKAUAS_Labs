#include <string>
#include <iostream>

int main9(int argc, int** argv) {
	setlocale(LC_ALL, "ru");

	std::string str, character;
	std::cout << "���� ������: ";
	std::cin >> str;

	for (int i = str.length() / 2 - 1; i >= 0; i--) {
		if (str[i] != str[str.length() - 1 - i]) {
			std::cout << "������ �� �������� �����������!";
			return 0;
		}
	}

	std::cout << "������ �������� �����������";
	return 0;
}