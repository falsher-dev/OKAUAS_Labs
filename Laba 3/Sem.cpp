#include <iostream>
int main7() {
	setlocale(LC_ALL, "ru");
	int sum = 0;
	for (int i=0; i <= 100; i++)
		sum += i;
	std::cout << "—умма чисел от 1 до 100: " << sum << std::endl;
	return 0;
}