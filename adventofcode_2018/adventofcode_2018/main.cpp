#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "day1.h"

using namespace std;

int main()
{
	//------------------------------- Start of Program -------------------------------

	cout << "DAY 1 ! \n" << endl;
	
	ifstream inFile("day1_input.txt", ios::in);
	vector<int> frequencies;

	day1::getFrequencies(frequencies, inFile);

	int totalFrequency = day1::computeFinalFrequency(frequencies);
	

	cout << "Total Frequency is : " << totalFrequency << endl;


	//------------------------------- End of Program -------------------------------
	std::cout << "\n\n\nEND OF PROGRAM" << std::endl;
	int hold = 0;
	std::cin >> hold;

	return 0;
}