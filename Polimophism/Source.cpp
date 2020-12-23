#include "Lib.h"
#include "Animal.h"
#include "DomesticAnimal.h"
#include "Dog.h"
#include "Cat.h"
#include "Zoo.h"

int main() {
	Animal* a = new Dog(3,8,"Vadim Chorniy", "simple");
	Animal* b = new Cat(2, 6, "Mariooo", 5.6);
	/*DomesticAnimal* d;
	a->print();
	b->print();

	vector<Animal*> animals = { a, b };
	for (auto& i : animals)
	{
		i->type();
		i->sound();
	}*/
	Zoo zoo("Happy World");
	zoo.add(a);
	zoo.add(b);
	zoo.print();

	return 0;
}