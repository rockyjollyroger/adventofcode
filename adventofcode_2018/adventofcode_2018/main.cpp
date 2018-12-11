#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "day1.h"

using namespace std;

int main()
{
	//------------------------------- Start of Program -------------------------------

	//------------------------
	// DAY 1	 Part - 1
	//------------------------

	cout << "DAY 1 Part 1 ! \n" << endl;
	
	ifstream inFile("day1_input.txt", ios::in);
	vector<int> frequencies;

	day1::GetFrequencies(frequencies, inFile);
	int totalFrequency = day1::SumFrequencies(frequencies);	

	cout << "Total Frequency is : " << totalFrequency << endl;


	//------------------------
	// DAY 1	 Part - 2
	//------------------------

	cout << "\nDAY 1 Part 2 ! \n" << endl;

    day1::Run(frequencies);


	//------------------------------- End of Program -------------------------------
	cout << "\n\n\nEND OF PROGRAM" << std::endl;
	int hold = 0;
	cin >> hold;

	return 0;
}