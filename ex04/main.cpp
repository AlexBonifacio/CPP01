#include <iostream>
#include <fstream> //ifstream
#include <cstring>

using std::cout;

int main(int ac, char **av)
{
	(void)av;
	if (ac != 4)
	{
		cout << "Programm use must be: \"./sed string1 string2 \n";		
		return 1;
	}

	std::ifstream	ifs("filename_to_sed");
	std::string		str;
	std::string		new_output;
	std::string		find_out;

	while (std::getline(ifs, str))
	{
		new_output += str;
		new_output += '\n';
	}

	

	// cout << new_output;

	std::size_t sed_size = std::strlen(av[2]);

	int index = new_output.find(av[2]);
	find_out = new_output.substr(index, sed_size);

	cout << find_out;

	ifs.close();
	return 0;
}
