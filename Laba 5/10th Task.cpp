#include <string>
#include <iostream>

int main10(int argc, int** argv) {
	setlocale(LC_ALL, "ru");

	std::string str1, str2;
	std::cout << "������ ������: ";
	std::cin >> str1;
	std::cout << "������ ������: ";
	std::cin >> str2;

	for (int len = str1.length(); len; len--) {
		for (int i = 0; i <= str1.length() - len; i++) {
			if (str2.find(str1.substr(i, len)) != std::string::npos) {
				std::cout << "������������ ���������: \"" << str1.substr(i, len) << '\"';
				return 0;
			}
		}
	}

	std::cout << "� ����� ��� ����� ��������";

	return 0;
}