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


	void computeFrequency(vector<int>& _frequencyValue, ifstream _inputFIle) const;

	~day1();
};

