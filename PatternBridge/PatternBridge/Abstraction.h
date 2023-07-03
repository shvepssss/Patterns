#pragma once
#include "Implementation.h"

namespace BR {
	class Abstraction {
	public:
		Abstraction(IImplementation* impl);
		virtual ~Abstraction() = default;
		virtual std::string Operation() const;

	protected:
		IImplementation* m_impl;
	};

	class AbstractionExtended final : public Abstraction {
	public:
		AbstractionExtended(IImplementation* impl) ;
		~AbstractionExtended() override = default;
		std::string Operation() const override;
	};

}