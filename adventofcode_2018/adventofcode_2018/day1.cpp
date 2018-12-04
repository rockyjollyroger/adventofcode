#include "day1.h"



day1::day1()
{
}

void day1::getFrequencies(vector<int>& _frequencies, ifstream& _inputFIle) 
{
	if (!_inputFIle)
	{
		cout << "Unable to read from file day1_input.txt \n";
		return;
	}
	
	int frequency;
	while (_inputFIle >> frequency)
	{
		_frequencies.push_back(frequency);
	}
}

int day1::computeFinalFrequency(vector<int> _frequencies)
{
	int result = 0;

	for (int i = 0; i < _frequencies.size(); i++)
	{
		result += _frequencies[i];
	}

	return result;
}

day1::~day1()
{
}
