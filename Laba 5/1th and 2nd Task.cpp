#include <string>
#include <iostream>

int getStringLength(std::string);

int main1(int argc, int** argv) {
	setlocale(LC_ALL, "ru");
	/*
	std::string str;
	while (true) {
		std::cout << "���� ������: ";
		std::cin >> str;
		std::cout << "����� ���� ������: " << getStringLength(str) << std::endl;
	}
	*/
	std::string str1,str2;
	std::cout << "������ ������: ";
	std::cin >> str1;
	std::cout << "������ ������: ";
	std::cin >> str2;
	std::cout << "�����: " << (str1 + str2);

	return 0;
}

int getStringLength(std::string str) {
	return str.length();
}