#include <iostream>
#include <string>
#include <cmath>
#define M_PI 3.14
#define M_E 2.718

void personal_data(std::string lastname, std::string number, std::string date_of_arriving, std::string price)
{
	std::cout << "enter lastname:"; std::cin >> lastname; std::cout << "\n";
	std::cout << "enter number:"; std::cin >> number; std::cout << "\n";
	std::cout << "enter date of arriving:"; std::cin >> date_of_arriving; std::cout << "\n";
	std::cout << "enter price:"; std::cin >> price; std::cout << "\n";
	std::cout << lastname << "\n";
	std::cout << number << "\n";
	std::cout << date_of_arriving << "\n";
	std::cout << price << "\n";
}

void calculation()
{
	float z = 0, y = 0, a = 0, b = 0;
	std::cin >> a;
	std::cin >> b;
	z = abs(b - 15.1);
	y = ((pow(M_E, a*(-1)) + ((z + pow(10, 3)))) / (sin(z))) / cos(M_PI) * z + log(b);
	std::cout << z << "\n";
	std::cout << y;
}
int main()
{
	std::string lastname = "";
	std::string number = "";
	std::string date_of_arriving = "";
	std::string price = "";

	personal_data(lastname, number, date_of_arriving, price);
	calculation();
}
