#include "day1.h"



day1::day1()
{
}

void day1::Run(vector<int> _frequencies)
{
    bool m_firstInput = true;
    int sum = 0;
    int input = 0;
    int running = 0;
    map<int, int> frequency_map;
    
    while (frequency_map.find(sum) == frequency_map.end())
    {
        frequency_map.insert(pair<int, int>(sum, 0));

        sum += _frequencies[input%_frequencies.size()];
        input++;

        ++running;
    }

    cout << "LOOP # " << running << endl;
    cout << "Solution Found: " << sum << endl;
}

void day1::GetFrequencies(vector<int>& _frequencies, ifstream& _inputFIle) 
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

int day1::SumFrequencies(vector<int> _frequencies)
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
