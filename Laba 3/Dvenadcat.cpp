#include <iostream>
int main() {
	setlocale(LC_ALL, "ru");
	int i = 1;
	int sum = 0;
	do {
		sum += i++;
	} while (i <= 100);
	std::cout << "����� ����� �� 1 �� 100: " << sum << std::endl;
	return 0;
}