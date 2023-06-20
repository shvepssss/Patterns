#pragma once
#include <string>

namespace Decor {
	class IComponent {
	public:
		virtual ~IComponent() = default;
		virtual std::string operation() = 0;
	};

	class ComponentA : public IComponent {
	public:
		~ComponentA() override = default;
		std::string operation() override;
	};
}