#include <iostream>
int main5() {
	setlocale(LC_ALL, "ru");
	int num;
	std::cout << "��������� �����: ";
	std::cin >> num;
	if (num < 1) {
		std::cout << "����������� ������ ����������� �����!";
		return 0;
	}
	int i = 2;
	int result = 1;
	while (i <= num)
		result *= i++;
	std::cout << num << "! = " << result;
	return 0;
}