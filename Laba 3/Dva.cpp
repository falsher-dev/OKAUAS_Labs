#include <iostream>
int main2() {
	setlocale(LC_ALL, "ru");
	int i = 1;
	int sum = 0;
	while (i <= 100)
		sum += i++;
	std::cout << "����� ����� �� 1 �� 100: " << sum << std::endl;
	return 0;
}