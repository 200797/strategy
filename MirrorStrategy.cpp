#include "MirrorStrategy.h"

string MirrorStrategy::AlgorithmInterface(const string& src)
{
	string mirrorString = src;
	reverse(mirrorString.begin(), mirrorString.end());
	return mirrorString;
}
