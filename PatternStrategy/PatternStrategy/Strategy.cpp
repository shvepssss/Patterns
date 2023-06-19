#include "Strategy.h"

using namespace std;

namespace Strat {

	void StrategyA::sort(vector<int>& vec) {
		std::sort(vec.begin(), vec.end());
	}

	void StrategyB::sort(vector<int>& vec) {
		std::sort(vec.rbegin(), vec.rend());
	}

} // Namespace Strat.