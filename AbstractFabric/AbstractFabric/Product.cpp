#include "Product.h"

using namespace std;

namespace AbF {
	std::string ProductA1::makeSomething1() {
		return "ProductA1 - makeSomething1.";
	}

	std::string ProductA2::makeSomething1() {
		return "ProductA2 - makeSomething1.";
	}

	std::string ProductB1::makeSomething1() {
		return "ProductB1 - makeSomething1.";
	}
	std::string ProductB1::makeSomething2(IProductA* collaborator) {
		auto s = collaborator->makeSomething1();
		return "ProductB1 - makeSomething2 with " + s + ".";
	}
	std::string ProductB2::makeSomething1() {
		return "ProductB2 - makeSomething1.";
	}
	std::string ProductB2::makeSomething2(IProductA* collaborator) {
		auto s = collaborator->makeSomething1();
		return "ProductB2 - makeSomething2 with " + s + ".";
	}
}