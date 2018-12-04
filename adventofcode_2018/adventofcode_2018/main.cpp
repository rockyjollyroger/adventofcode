#include <iostream>
#include <fstream>
#include <string>

#include "day1.h"

using namespace std;

int main()
{
	//------------------------------- Start of Program -------------------------------

	cout << "Herro World !";
	
	ifstream inFile("day1_input.txt", ios::in);

	if (!inFile)
	{
		cout << "Unable to read from file day1_input.txt \n";
		return -1;
	}

	char ch;
	while (inFile.get(ch))
		cout.put(ch);

	   	 

	//------------------------------- End of Program -------------------------------
	std::cout << "\n\n\nEND OF PROGRAM" << std::endl;
	int hold = 0;
	std::cin >> hold;

	return 0;
}