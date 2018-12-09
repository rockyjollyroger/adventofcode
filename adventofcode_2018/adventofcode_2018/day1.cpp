#include "day1.h"



day1::day1()
{
}

void day1::Run(vector<int> _frequencies)
{
    bool m_solutionFound = false;
    int sum = 0;
    int running = 0;
    map<int, int> frequency_map;
    while (!m_solutionFound)
    {
        //for the size of the vector add the value and the sum to the map
            //If we go through the entire area with the vector - loop through it again 
        //Check the map values if the sum existed already

        for (int i = 0; i < _frequencies.size() ; i++)
        {
            sum += _frequencies[i];

            int counter = 0;
            frequency_map.insert(pair<int, int>(sum, counter));
        }

        m_solutionFound = frequency_map.find(sum) == frequency_map.end();
        cout << "LOOP # " << ++running << endl;
    }
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

bool day1::FoundSolution(map<int, int> _map)
{
    for (map<int, int>::iterator it = _map.begin(); it != _map.end(); it++ )
    {
        cout << it->first << " --->     " << it->second << endl;

        if (it->second == 2)
        {
            cout << "The first reocurance of the frequency is: " << it->first << endl;
            return true;
        }            
    }

    return false;
}

day1::~day1()
{
}
