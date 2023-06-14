#include <iostream>

int main() {
	setlocale(LC_ALL, "ru");
	double t;
	double tCelse = 0;
	char c;
	std::cout << "Напишите значение температуры (вместо запятой используйте точку для дробных чисел): ";
	std::cin >> t;
	std::cout << "В какой единице измерения вы указали температуру? (C/F): ";
	std::cin >> c;
	if (c == 'C') {
		tCelse = t;
		std::cout << "Температура в градусах фаренгейта: " << ((9. / 5) * t + 32) << std::endl;
	}
	else if (c == 'F') {
		tCelse = (t - 32) * (5. / 9);
		std::cout << "Температура в градусах цельсия: " << tCelse << std::endl;
	}
	else {
		std::cout << "Ошибка в распознании введённых данных...";
		return -1;
	}
	if (tCelse < 0) {
		std::cout << "Температура ниже точки замерзания";
	}
	else if (tCelse == 0) {
		std::cout << "Температура равна точке замерзания";
	}
	else {
		std::cout << "Температура выше точки замерзания";
	}
}