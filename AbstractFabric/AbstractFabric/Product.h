#pragma once
#include <string>

namespace AbF {

	class IProductA {
	public:
		virtual std::string makeSomething1() = 0;
	};

	class ProductA1 : public IProductA {
	public:
		std::string makeSomething1() override;
	};

	class ProductA2 : public IProductA {
	public:
		std::string makeSomething1() override;
	};

	class IProductB {
	public:
		virtual std::string makeSomething1() = 0;
		virtual std::string makeSomething2(IProductA* collaborator) = 0;
	};

	class ProductB1 : public IProductB {
	public:
		std::string makeSomething1() override;
		std::string makeSomething2(IProductA* collaborator) override;
	};

	class ProductB2 : public IProductB {
	public:
		std::string makeSomething1() override;
		std::string makeSomething2(IProductA* collaborator) override;
	};
}