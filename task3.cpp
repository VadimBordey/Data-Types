#include <iostream>
#include <iomanip>

int main()
{
	int number;
	std::cout << "Введіть ціле число: ";
	std::cin >> number;
	std::cout << "Число парне: " << (number % 2 == 0 ? "ТАК" : "НІ") << std::endl;
	std::cout << "Число ділиться на 8: " << (number % 8 == 0 ? "ТАК" : "НІ") << std::endl;
	std::cout << "Число ділиться на 16: " << (number % 16 == 0 ? "ТАК" : "НІ") << std::endl;
	std::cout << "Число у вісімковій системі: " <<  std::oct << number << std::endl;
	std::cout << "Число у шістнадцятковій системі: " << std::hex << number << std::endl;
	return 0;
}
