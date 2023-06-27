#include "Fabric.h"

namespace AbF {
	IProductA* AbstractFactory1::createA() {
		return new ProductA1();
	}
	IProductB* AbstractFactory1::createB() {
		return new ProductB1();
	}
	IProductA* AbstractFactory2::createA() {
		return new ProductA2();
	}
	IProductB* AbstractFactory2::createB() {
		return new ProductB2();
	}
}