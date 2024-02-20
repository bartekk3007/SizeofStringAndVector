#include <iostream>
#include <vector>
#include <string>

int main()
{
	std::string s1 = "Bjarne";

	std::cout << sizeof(s1) << '\n';
	std::cout << sizeof(std::string) << '\n';

	std::vector<int> vi1 = {1, 2, 3, 4, 5};
	std::vector<double> vd1 = {1.5, 2.5, 3.5, 4.5, 5.5};

	std::cout << sizeof(vi1) << '\n';
	std::cout << sizeof(vd1) << '\n';
	std::cout << sizeof(std::vector<int>) << '\n';
	std::cout << sizeof(std::vector<double>) << '\n';

	return 0;
}