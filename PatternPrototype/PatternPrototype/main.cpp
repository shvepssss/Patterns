#include "Prototype.h"

using namespace PT;
using namespace std;

void client(PrototypeFactory* prototypeFactory) {
	std::cout << "Let's create a Prototype 1\n";

	IPrototype* prototype = prototypeFactory->createPrototype(PType::PROTOTYPE_1);
	prototype->method(93);
	delete prototype;

	cout << "\n";
	cout << "Let's create a Prototype 2 \n";

	prototype = prototypeFactory->createPrototype(PType::PROTOTYPE_2);
	prototype->method(77);
	delete prototype;
}

int main() {
	PrototypeFactory* factory = new PrototypeFactory();
	client(factory);
	delete factory;
	return 0;
}