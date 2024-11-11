#include <iostream>
#include <iomanip>

int main()
{
	double num1, num2;
	std::cout << "Введіть перше число: ";
	std::cin >> num1;
	std::cout << "Введіть друге число: ";
	std::cin >> num2;
	std::cout << std::fixed << std::setprecision(12);
	std::cout << "Сума: " << num1 + num2 << std::endl;
	std::cout << "Різниця: " << num1 - num2 << std::endl;
	std::cout << "Добуток: " << num1 * num2 << std::endl;
	if (num2 != 0) {
	std::cout << "Частка: " << num1 / num2 << std::endl;}
	else {
	std::cout << "Частка: Ділення на нуль!" << std::endl; }
	return 0;
}
