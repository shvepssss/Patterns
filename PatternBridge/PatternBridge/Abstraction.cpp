#include "Abstraction.h"

namespace BR {

	Abstraction::Abstraction(IImplementation* impl) : m_impl(impl)
	{ }
	
	std::string Abstraction::Operation() const {
		return " do something using Implementation:"+m_impl->Operation();
	}

	AbstractionExtended::AbstractionExtended(IImplementation* impl) : Abstraction(impl)
	{ }

	std::string AbstractionExtended::Operation() const {
		return  " do something Extended using Implementation:" + m_impl->Operation();
	}
}