#include <iostream>
int main10() {
	setlocale(LC_ALL, "ru");
	int num;
	std::cout << "��������� �����: ";
	std::cin >> num;
	if (num < 1) {
		std::cout << "����������� ������ ����������� �����!";
		return 0;
	}
	int result = 1;
	for (int i = 2; i <= num; i++)
		result *= i;
	std::cout << num << "! = " << result;
	return 0;
}