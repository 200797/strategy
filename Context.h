#pragma once
#include <string>
#include "Strategy.h"
#include <map>

using namespace std;

class Context
{

public:
	// �eStrategy��map�ɓo�^����
	Context();
	~Context();

	string ContextInterface(const string& key, const string& src);

private:
	map<string, Strategy*> strategies_;
};