#pragma once
#include "Lib.h"
#include "Animal.h"

class Zoo
{
public:
	Zoo(const string& name)
		:name(name)
	{}

	void add(Animal* insert); //menu 
	void print() const; 
	void edit(); // age and weight


private:
	void printTypes() const;
	vector<Animal*> zoo;
	string name;
};

inline void Zoo::add(Animal* insert)
{
	zoo.push_back(insert);
}

inline void Zoo::print() const
{
	cout << "----------" << name << "----------" << endl;
	for (const auto& elem : zoo)
	{
		elem->print();
	}
	cout << endl;
}

inline void Zoo::edit()
{
	

}

inline void Zoo::printTypes() const
{
}
