#pragma once
#include "Strategy.h"

namespace Strat {

class Context {
public:
	~Context() = default;
	Context(IStrategy* str);
	void setStrategy(IStrategy* str);
	void doSort(std::vector<int>& vec);
private:
	IStrategy* m_str;
};

} // Namespace Strat.