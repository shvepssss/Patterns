#pragma once
#include <string>
#include <unordered_map>
#include <iostream>

namespace PT {
	enum class PType {
		PROTOTYPE_1 = 0,
		PROTOTYPE_2
	};

	class IPrototype {
	protected:
		std::string m_name;
		float m_val;

	public:
		IPrototype();
		IPrototype(std::string name);
		virtual ~IPrototype();
		virtual IPrototype* clone() const = 0;
		virtual void method(float val);
	};


	class PrototypeA : public IPrototype {

	public:
		PrototypeA(std::string name, float val);
		~PrototypeA() override = default;
		IPrototype* clone() const override;
	};

	class PrototypeB : public IPrototype {

	public:
		PrototypeB(std::string name, float val);
		~PrototypeB() override = default;
		IPrototype* clone() const override;
	};

	class PrototypeFactory {
	private:
		std::unordered_map<PType, IPrototype*> m_prototypes;
	public:
		PrototypeFactory();
		~PrototypeFactory();
		IPrototype* createPrototype(PType type);
	};

}