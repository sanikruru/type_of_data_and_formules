#include <iostream>
#include <string>
#include <cmath>

void personal_data(std::string lastname, std::string name, std::string fathers_name, std::string phone_number)
{
	std::cout << "enter lastname:"; std::cin >> lastname; std::cout << "\n";
	std::cout << "enter name:"; std::cin >> name; std::cout << "\n";
	std::cout << "enter fathers name:"; std::cin >> fathers_name; std::cout << "\n";
	std::cout << "enter your phone number:"; std::cin >> phone_number; std::cout << "\n";
	std::cout << lastname << "\n";
	std::cout << name << "\n";
	std::cout << fathers_name << "\n";
	std::cout << phone_number << "\n";

}

void calculation()
{
	float x = 0, y = 0, a = 0, b = 0;
	std::cin >> x;
	std::cin >> y;
	b = (x + (y / (5.0 + std::sqrt (x))) / (std::abs (x + y) + std::pow (x,1/3)));
	a = std::pow(std::cos(std::tan(1 / b)), 2);
	std::cout << b <<"\n";
	std::cout << a;
}
int main()
{

#if 1
	std::string lastname = "";
	std::string name = "";
	std::string fathers_name = "";
	std::string phone_number = "";

	personal_data(lastname, name, fathers_name, phone_number);
#endif
	calculation();
}
