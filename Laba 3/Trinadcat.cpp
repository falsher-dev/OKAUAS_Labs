#include <iostream>
int main() {
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
	int i = 3;
	do {
		if (!(number % i++)) {
			std::cout << "����� �������� ���������!";
			return 0;
		}
	} while (i < number);
	std::cout << "����� �������� �������!";
	return 0;
}