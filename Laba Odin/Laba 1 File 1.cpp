#include <iostream>

int main1(int argc, int* argv) {
	char c1 = 'a';
	char c2 = 98;
	char c3 = 111;
	double d = 123.456;
	const char* str = "very cool";
	int i1 = 5;
	int i2 = 3;
	std::cout << c1 << c2 << c3 << c2 << c1 << " is " << str << std::endl;
	std::cout << "Best number: " << d << std::endl;
	std::cout
		<< "Summa: "		<< (i1 + i2) << std::endl
		<< "Raznost: "		<< (i1 - i2) << std::endl
		<< "Proizvedenie: "	<< (i1 * i2) << std::endl
		<< "Chastnoe: "		<< (i1 / i2) << std::endl
		<< "Ostatok ot delenia: " << (i1 % i2) << std::endl;
	return 0;
}