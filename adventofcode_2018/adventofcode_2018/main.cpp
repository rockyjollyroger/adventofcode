#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "day1.h"

using namespace std;

int main()
{
	//------------------------------- Start of Program -------------------------------

	cout << "Herro World !" << endl;
	
	ifstream inFile("day1_input.txt", ios::in);

	if (!inFile)
	{
		cout << "Unable to read from file day1_input.txt \n";
		return 0;
	}

	/*
	//Read from a file
	char ch;
	while (inFile.get(ch))
		cout.put(ch);
	*/

	vector<int> frequencies;

	int frequency;
	while (inFile >> frequency)
	{
		frequencies.push_back(frequency);
	}

	int size_frequency = frequencies.size();
	int totalFrequency = 0;

	for (int i = 0;  i < size_frequency; i++)
	{
		totalFrequency += frequencies[i];
	}

	cout << "Total Frequency is : " << totalFrequency << endl;


	//------------------------------- End of Program -------------------------------
	std::cout << "\n\n\nEND OF PROGRAM" << std::endl;
	int hold = 0;
	std::cin >> hold;

	return 0;
}