#include <iostream>

int main() {
	setlocale(LC_ALL, "ru");
	double t;
	double tCelse = 0;
	char c;
	std::cout << "�������� �������� ����������� (������ ������� ����������� ����� ��� ������� �����): ";
	std::cin >> t;
	std::cout << "� ����� ������� ��������� �� ������� �����������? (C/F): ";
	std::cin >> c;
	if (c == 'C') {
		tCelse = t;
		std::cout << "����������� � �������� ����������: " << ((9. / 5) * t + 32) << std::endl;
	}
	else if (c == 'F') {
		tCelse = (t - 32) * (5. / 9);
		std::cout << "����������� � �������� �������: " << tCelse << std::endl;
	}
	else {
		std::cout << "������ � ����������� �������� ������...";
		return -1;
	}
	if (tCelse < 0) {
		std::cout << "����������� ���� ����� ����������";
	}
	else if (tCelse == 0) {
		std::cout << "����������� ����� ����� ����������";
	}
	else {
		std::cout << "����������� ���� ����� ����������";
	}
}