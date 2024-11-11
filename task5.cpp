#include <iostream>

int main()
{
	double score;
	std::cout << "Введіть кількість балів (від 0,0 до 9,0): ";
	std::cin >> score;
	if (score >= 0.0 && score <= 4.4) {
	std::cout << "Оцінка: незадовільно(2,0)" << std::endl; }
	else if (score >= 4.5 && score <= 5.2) {
	std::cout << "Оцінка: задовільно(3,0)" << std::endl; }
	else if (score >= 5.3 && score <= 6.2) {
	std::cout << "Оцінка: вище задовільно(3,5)" << std::endl; }
	else if (score >= 6.3 && score <= 7.2) {
	std::cout << "Оцінка: добре(4,0)" << std::endl; }
	else if (score >= 7.3 && score <= 8.2) {
	std::cout << "Оцінка: вище добре(4,5)" << std::endl; }
	else if (score >= 8.3 && score <= 9.0) {
	std::cout << "Оцінка: дуже добре(5,0)" << std::endl; }
	else {
	std::cout << "Неправильна кількість пунктів!" << std::endl; }
	return 0;
}	  
