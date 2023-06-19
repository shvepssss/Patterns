#include <iostream>
#include "Context.h"
using namespace Strat;
using namespace std;

int main() {
	Context* con = new Context(new StrategyA());
	vector<int> vec{ 3,7,3,1,4 };
	con->doSort(vec);
	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << " ";
	}
	cout << endl;
	con->setStrategy(new StrategyB());
	con->doSort(vec);
	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << " ";
	}
	cout << endl;
	return 0;
}