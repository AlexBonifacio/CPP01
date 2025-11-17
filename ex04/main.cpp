#include <iostream>
#include <fstream> //ifstream
#include <cstring>
#include "SedReplacer.hpp"

using std::cout;
using std::cerr;

int main(int ac, char **av)
{
	(void)av;
	if (ac != 4)
	{
		cerr << "Programm use must be: \"./sed <filename> <string1> <string2>\"\n";		
		return 1;
	}

	SedReplacer	sedReplacer(av[1], av[2], av[3]);
	if (!sedReplacer.custom_replace())
		cerr << "Error during processing sedReplacer\n\n";
	else
		cerr << "sedReplacer processed successfully\n\n";


	SedReplacer	sedReplacer2("file2.txt", "Hello", "Hi");
	if (!sedReplacer2.custom_replace())
		cerr << "Error during processing sedReplacer2\n\n";
	else
		cerr << "sedReplacer2 processed successfully\n\n";
	

	SedReplacer	sedReplacer3("file3.txt", "", "Hi");
	if (!sedReplacer3.custom_replace())
		cerr << "Error during processing sedReplacer3\n\n";
	else
		cerr << "sedReplacer3 processed successfully\n\n";
	

	SedReplacer	sedReplacer4("nofile.txt", "Hello", "Hi");
	if (!sedReplacer4.custom_replace())
		cerr << "Error during processing sedReplacer4\n\n";
	else
		cerr << "sedReplacer4 processed successfully\n\n";


	SedReplacer	sedReplacer5("file5.txt", "Hello", "");
	if (!sedReplacer5.custom_replace())
		cerr << "Error during processing sedReplacer5\n\n";
	else
		cerr << "sedReplacer5 processed successfully\n\n";

	return 0;
}
