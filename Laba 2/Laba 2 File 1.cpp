#include <iostream>

int main() {
	setlocale(LC_ALL, "ru"); //Сообщаем машине, что будут использоваться русские буквы
	int age;
	std::cout << "Напишите ваш возраст: ";
	std::cin >> age;
	std::cout << std::endl;
	if (age < 18)
		std::cout << "Вы еще не достигли совершеннолетия";
	else if (age >= 18 && age < 30)
		std::cout << "Вы находитесь в расцвете сил";
	else if (age >= 30 && age < 60)
		std::cout << "Вы находитесь в среднем возрасте";
	else if (age >= 60)
		std::cout << "Вы пожилой паук";
	return 0;
}