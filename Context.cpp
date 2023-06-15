#include "Context.h"
#include "MirrorStrategy.h"
#include "UpperStrategy.h"

Context::Context()
{
	// StrategyMirror ��o�^
	strategies_["mirror"] = new MirrorStrategy();

	// StrategyUpper ��o�^
	strategies_["upper"] = new UpperStrategy();
}

Context::~Context()
{
	// strategies_ �̃��������
	for (auto& pair : strategies_)
	{
		delete pair.second;
		pair.second = nullptr;
	}
}

string Context::ContextInterface(const string& key, const string& src)
{
	Strategy* pStrategy = strategies_[key];
	return pStrategy->AlgorithmInterface(src);
}
