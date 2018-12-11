#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <map>

#include "day1.h"

using namespace std;

class day1
{
public:

	day1();

	static void Run(vector<int> _frequencies);
	static void GetFrequencies(vector<int>& _frequencies, ifstream& _inputFIle);
	static int SumFrequencies(vector<int> _frequencies);

	~day1();
};

