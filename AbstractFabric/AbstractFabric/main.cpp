#include "Fabric.h"
#include <iostream>

using namespace std;
using namespace AbF;

void testFactoryProcedure(IAbstractFactory* factory) {
	IProductA* pa = factory->createA();
	IProductB* pb = factory->createB();

	cout << pb->makeSomething1() << "\n";
	cout << pb->makeSomething2(pa) << "\n";

	delete pa;
	delete pb;
}

int main()
{
	cout << "Client: Testing client code with the 1 factory type:\n";
	AbstractFactory1* f1 = new AbstractFactory1();
	testFactoryProcedure(f1);

	cout << "Client: Testing client code with the 2 factory type:\n";
	AbstractFactory2* f2 = new AbstractFactory2();
	testFactoryProcedure(f2);

	delete f1;
	delete f2;

	return 0;
}