#pragma once
#include <string>

namespace BR {
	
	class IImplementation {
	public:
		virtual ~IImplementation() = default;
		virtual std::string Operation() const = 0;
	};

	class ImplementationA : public IImplementation {
	public:
		~ImplementationA() override = default;
		std::string Operation() const override;
	};

	class ImplementationB : public IImplementation {
	public:
		~ImplementationB() override = default;
		std::string Operation() const override;
	};
 }