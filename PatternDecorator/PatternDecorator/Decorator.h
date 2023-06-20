#pragma once
#include "Component.h"

namespace Decor {
	class Decorator : public IComponent {
	public:
		~Decorator() override = default;
		Decorator(IComponent* component);
		std::string operation() override;
	protected:
		IComponent* m_component;
	};

	class DecoratorA : public Decorator {
	public:
		~DecoratorA() override = default;
		DecoratorA(IComponent* component);
		std::string operation() override;
	};

	class DecoratorB : public Decorator {
	public:
		~DecoratorB() override = default;
		DecoratorB(IComponent* component);
		std::string operation() override;
	};
}