#include <string>
#include <iostream>

int main4(int argc, int** argv) {
	setlocale(LC_ALL, "ru");

	std::string str1, str2;
	std::cout << "������ ������: ";
	std::cin >> str1;
	std::cout << "������ ������: ";
	std::cin >> str2;
	
	if (str1.length() == str2.length()) {
		for (int i = 0; i < str1.length(); i++) {
			if (str2.find(str1[i]) == std::string::npos) {
				std::cout << "������ ������ �� �������� �����������";
				return 0;
			}
		}
		std::cout << "������ ������ �������� �����������!!";
		return 0;
	}

	std::cout << "������ ������ �� �������� �����������";

	return 0;
}