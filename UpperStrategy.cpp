#include "UpperStrategy.h"
#include <algorithm>

string UpperStrategy::AlgorithmInterface(const string& src)
{
    string uppercaseString = src;
    transform(uppercaseString.begin(), uppercaseString.end(), uppercaseString.begin(), ::toupper);
    return uppercaseString;
}

