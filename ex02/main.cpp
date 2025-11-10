
#include <iostream>
#include <iomanip>

using std::cout;

int main(void)
{
	std::string str1 = "HI THIS IS BRAIN";

	std::string* stringPTR = &str1;
	std::string& stringREF = str1;

	cout << std::setw(40) << std::left << "Memory adress of the string variable: " << &str1 << "\n";
	cout << std::setw(40) << std::left << "Memory adress held by stringPTR: " << stringPTR  << "\n";
	cout << std::setw(40) << std::left << "Memory adress held by stringREF: " << &stringREF << "\n";

	cout << std::setw(40) << std::left << "String variable: " << str1 << "\n";
	cout << std::setw(40) << std::left << "Value pointed by stringPTR: " << *stringPTR << "\n";
	cout << std::setw(40) << std::left << "Value pointed by stringREF: " << stringREF << "\n";

	return 0;
}