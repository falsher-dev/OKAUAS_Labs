#include <iostream>

int main() {
	setlocale(LC_ALL, "ru"); //�������� ������, ��� ����� �������������� ������� �����
	int age;
	std::cout << "�������� ��� �������: ";
	std::cin >> age;
	std::cout << std::endl;
	if (age < 18)
		std::cout << "�� ��� �� �������� ���������������";
	else if (age >= 18 && age < 30)
		std::cout << "�� ���������� � �������� ���";
	else if (age >= 30 && age < 60)
		std::cout << "�� ���������� � ������� ��������";
	else if (age >= 60)
		std::cout << "�� ������� ����";
	return 0;
}