#include "Decorator.h"
namespace Decor {

	Decorator::Decorator(IComponent* component) : m_component(component)
	{ }

	/**
	 * ��������� ���������� ��� ������ ��������� ����������.
	 */
	std::string Decorator::operation() {
		return m_component->operation();
	}

	DecoratorA::DecoratorA(IComponent* component)  : Decorator(component)
	{ }

	std::string DecoratorA::operation() {
		return "DecoratorA(" + Decorator::operation() + ")";
	}
	
	DecoratorB::DecoratorB(IComponent* component) : Decorator(component)
	{ }

	std::string DecoratorB::operation() {
		return "DecoratorB(" + Decorator::operation() + ")";
	}
}