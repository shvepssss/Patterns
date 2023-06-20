#include <iostream>

#include "Decorator.h"

using namespace std;
using namespace Decor;

	/**
	 * ���������� ��� �������� �� ����� ���������, ��������� ��������� ����������.
	 * ����� �������, �� ������� ����������� �� ���������� ������� �����������, �
	 * �������� ��������.
	 */
	void clientCode(IComponent* component) {
		cout << "Result:" << component->operation() << endl;
	}

	int main() {
		// ������� ����������.
		IComponent* simple = new ComponentA();
		cout << "simple:" << endl;
		clientCode(simple);

		//�������������� ����������.
		IComponent* decor1 = new DecoratorA(simple);
		cout << "decor1:" << endl;
		clientCode(decor1);

		IComponent* decor2 = new DecoratorB(decor1);
		cout << "decor2:" << endl;
		clientCode(decor2);

		delete simple;
		delete decor1;
		delete decor2;
		return 0;
	}