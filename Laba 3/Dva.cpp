#include <iostream>
int main() {
	setlocale(LC_ALL, "ru");
	int i = 1;
	int sum = 0;
	while (i <= 100)
		sum += i++;
	std::cout << "—умма чисел от 1 до 100: " << sum << std::endl;
	return 0;
}