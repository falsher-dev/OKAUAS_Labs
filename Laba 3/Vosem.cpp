#include <iostream>
int main8() {
	setlocale(LC_ALL, "ru");
	int number;
	std::cout << "������� ����� ��� ��������, �������� �� ��� �������: ";
	std::cin >> number;
	if (number <= 0) {
		std::cout << "����������� ������ ����������� �����!";
		return 0;
	}
	else if (number == 1)
		std::cout << "����� �� �������� �� �������, �� ���������!";
	else if (!(number % 2))
		std::cout << "��� ������ ����� �������� ����������!";
	for (int i = 3; i < number; i++)
		if (!(number % i)) {
			std::cout << "����� �������� ���������!";
			return 0;
		}
	std::cout << "����� �������� �������!";
	return 0;
}