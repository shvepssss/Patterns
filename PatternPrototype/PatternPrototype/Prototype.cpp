#include "Prototype.h"

using namespace std;

namespace PT {
	/* IPrototype */
	IPrototype::IPrototype() 
	{ }

	IPrototype::IPrototype(string name) : m_name(name)
	{ }

	IPrototype::~IPrototype() = default;

	void IPrototype::method(float val) {
		m_val = val;
		cout << "Call Method from " << m_name << " with field : " << m_val << endl;
	}

	/* PrototypeA */
	PrototypeA::PrototypeA(string name, float val) : IPrototype(name)
	{ }
	
	IPrototype* PrototypeA::clone() const {
		return new PrototypeA(*this);
	}

	/* PrototypeB */
	PrototypeB::PrototypeB(string name, float val) : IPrototype(name)
	{ }

	IPrototype* PrototypeB::clone() const {
		return new PrototypeB(*this);
	}

	/* PrototypeFactory */
	PrototypeFactory::PrototypeFactory() {
		m_prototypes[PType::PROTOTYPE_1] = new PrototypeA("PROTOTYPE_1", 1.1);
		m_prototypes[PType::PROTOTYPE_2] = new PrototypeA("PROTOTYPE_2", 1.2);
	}
	
	PrototypeFactory::~PrototypeFactory() {
		delete m_prototypes[PType::PROTOTYPE_1];
		delete m_prototypes[PType::PROTOTYPE_2];
	}
	
	IPrototype* PrototypeFactory::createPrototype(PType type) {
		return m_prototypes[type]->clone();
	}
}