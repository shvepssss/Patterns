#include "Context.h"

namespace Strat {
	Context::Context(IStrategy* str) : m_str(str)
	{ }
	
	void Context::setStrategy(IStrategy* str) {
		delete m_str;
		m_str = str;
	}

	void Context::doSort(std::vector<int>& vec)
	{
		m_str->sort(vec);
	}
} // Namespace Strat.