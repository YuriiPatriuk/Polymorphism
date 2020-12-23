#pragma once
#include "Lib.h"

class Animal //неявно абстрактний клас через нереалізовані методи
{
public:
	Animal(const size_t& age, const double& weight)
		:age(age), weight(weight)
	{}
	virtual void print() const;
	virtual void type() const = 0;
	virtual void eat() const = 0;
	virtual void sound() const = 0;
private:
	size_t age;
	double weight;
};

inline void Animal::print() const
{
	type();
	cout << "Age: " << age << endl << "Weight: " << weight << endl;
	eat();
	sound();

}
