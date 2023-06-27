#pragma once
#include "Product.h"

namespace AbF {
	class IAbstractFactory {
	public:
		virtual IProductA* createA() = 0;
		virtual IProductB* createB() = 0;
	};

	class AbstractFactory1 : public IAbstractFactory {
	public:
		IProductA* createA() override;
		IProductB* createB() override;
	};

	class AbstractFactory2 : public IAbstractFactory {
	public:
		IProductA* createA() override;
		IProductB* createB() override;
	};

}