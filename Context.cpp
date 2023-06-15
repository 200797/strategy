#include "Context.h"
#include "MirrorStrategy.h"
#include "UpperStrategy.h"

Context::Context()
{
	// StrategyMirror ‚ð“o˜^
	strategies_["mirror"] = new MirrorStrategy();

	// StrategyUpper ‚ð“o˜^
	strategies_["upper"] = new UpperStrategy();
}

Context::~Context()
{
	// strategies_ ‚Ìƒƒ‚ƒŠ‰ð•ú
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
