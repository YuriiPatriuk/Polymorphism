#pragma once
#include "DomesticAnimal.h"
#include "Lib.h"
class Dog :
    public DomesticAnimal
{
public:
    Dog(const size_t& age = 0, const double& weight = 0,
        const string& owner = "Without", const string& breed = "No breed")
        :DomesticAnimal(age,weight,owner),breed(breed)
    {}
    void sound() const override;
    void eat() const override;
    void type() const override;
    void print() const override;
    
private:
    string breed;
};
inline void Dog::sound() const
{
    cout << "Woof - Woof" << endl;
}

inline void Dog::eat() const
{
    cout << "Like meat!" << endl;
}

inline void Dog::type() const
{
    cout << "Dog ";
    DomesticAnimal::type();
}

inline void Dog::print() const
{
    DomesticAnimal::print();
    cout << "Breed: " << breed << endl;
    cout << endl;
}

