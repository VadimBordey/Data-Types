#include <iostream>
#include <iomanip>

int main()
{
	int option;
	double temperature;
	std::cout << "Виберіть операцію (1 - Цельсій у Фаренгейт, 2 - Фаренгейт у Цельсій: ";
	std::cin >> option;
	std::cout << "Введіть температуру: ";
	std::cin >> temperature;
	if (option == 1) {
	if (temperature < -273.15) {
	std::cout << "Занадто холодно для підрахунку!" << std::endl; }
	else {
	double fahrenheit = (temperature * 9 / 5) + 32;
	std::cout << "Температура у Фаренгейті: " << std::fixed << std::setprecision(2) << fahrenheit << std::endl; }
} 	else if (option == 2) {
	if (temperature < -459.67) {
	std::cout << "Занадто холодно для підрахунку!" << std::endl;
}	else {
	double celsius = (temperature - 32) * 5 / 9;
	std::cout << "Температура у Цельсії: " << std::fixed << std::setprecision(2) << celsius << std::endl;
	}
}	else {
	std::cout << "Некоректний вибір операції!" << std::endl; }
	return 0;
}
