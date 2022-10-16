#include <iostream>
#include <string>
#include <cmath>
#define M_PI 3.14
#define M_E 2.718

void personal_data(std::string name, std::string genre, std::string budget, std::string release_date)
{
	std::cout << "enter name:"; std::cin >> name; std::cout << "\n";
	std::cout << "enter genre:"; std::cin >> genre; std::cout << "\n";
	std::cout << "enter budget:"; std::cin >> budget; std::cout << "\n";
	std::cout << "enter release_date:"; std::cin >> release_date; std::cout << "\n";
	std::cout << name << "\n";
	std::cout << genre << "\n";
	std::cout << budget << "\n";
	std::cout << release_date << "\n";
}

void calculation()
{
	float x = 0, y = 0, a = 0, b = 0;
	std::cin >> x;
	std::cin >> y;
	b = (2 * cos(x - (M_PI / 6))) / (1 / x + pow(sin(y), 2));
	a = pow(M_E, b - 1) + pow(tan(x), 2);
	std::cout << b << "\n";
	std::cout << a;
}
int main()
{
	std::string name = "";
	std::string genre = "";
	std::string budget = "";
	std::string release_date = "";

	personal_data(name, genre, budget, release_date);
	calculation();
}
