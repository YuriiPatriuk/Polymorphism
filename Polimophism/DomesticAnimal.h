#pragma once
#include "Animal.h"
#include "Lib.h"

class DomesticAnimal :
    public Animal
{
public:
    DomesticAnimal(const size_t& age = 0, const double& weight = 0, const string& owner = "Without");
    void type() const override;
    virtual void print() const override;
private:
    string owner;
};
inline DomesticAnimal::DomesticAnimal(const size_t& age, const double& weight, const string& owner)
    :Animal(age,weight), owner(owner)
{}

inline void DomesticAnimal::type() const
{
    cout << "is a domestic animal!" << endl;
}

inline void DomesticAnimal::print() const
{
    cout << "Owner: " << owner << endl;
    Animal::print();
}
