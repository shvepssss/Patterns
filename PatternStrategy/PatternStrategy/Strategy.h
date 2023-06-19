#pragma once
#include <vector>
#include <algorithm>

namespace Strat {

	class IStrategy {
	public:
		virtual ~IStrategy() = default;

		virtual void sort(std::vector<int>& vec) = 0;
	};

	class StrategyA : public IStrategy {
	public:
		~StrategyA() override = default;

		void sort(std::vector<int>& vec) override;
	};

	class StrategyB : public IStrategy {
	public:
		~StrategyB() override = default;

		void sort(std::vector<int>& vec) override;
	};

} // Namespace Strat.