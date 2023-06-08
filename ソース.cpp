#include <iostream>
#include <string>
#include "Context.h"

using namespace std;

int main() {
	string result("");
	Context* pContext = new Context();

	result = pContext->ContextInterface("upper", "upper test");
	cout << "result:" << result << endl;

	result = pContext->ContextInterface("mirror", "mirror test");
	cout << "result:" << result << endl;

	delete pContext;
	return 0;
}