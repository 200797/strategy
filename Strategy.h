#pragma once
#include <string>

using namespace std;

class Strategy
{
public:
	virtual ~Strategy() {}
	virtual string AlgorithmInterface(const string& src) = 0;
};

