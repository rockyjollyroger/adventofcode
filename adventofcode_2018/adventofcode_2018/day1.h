#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "day1.h"

using namespace std;

class day1
{
public:

	day1();

	static void getFrequencies(vector<int>& _frequencies, ifstream& _inputFIle);
	static int computeFinalFrequency(vector<int> _frequencies);

	~day1();
};

