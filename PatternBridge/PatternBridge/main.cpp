#include "Abstraction.h"
#include <iostream>

using namespace BR;
using namespace std;

void ClientCode(Abstraction* abs) {
	cout << abs->Operation() << endl;
}

int main() {
	IImplementation* imp = new ImplementationA();
	Abstraction* a = new Abstraction(imp);
	ClientCode(a);
	delete imp;
	delete a;

	imp = new ImplementationB();
	a = new AbstractionExtended(imp);
	ClientCode(a);
	delete imp;
	delete a;
	return 0;
}