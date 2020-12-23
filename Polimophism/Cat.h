#pragma once
#include "Lib.h"
#include "DomesticAnimal.h"
class Cat :
    public DomesticAnimal
{
public:
    Cat(const size_t& age = 0, const double& weight = 0,
        const string& owner = "Without", const double& wool = 0)
        :DomesticAnimal(age, weight, owner), wool(wool)
    {}
    void sound() const override;
    void eat() const override;
    void type() const override;
    void print() const override;

private:
    double wool;
};

inline void Cat::sound() const
{
    cout << "Meow - Meow" << endl;
}

inline void Cat::eat() const
{
    cout << "Like fish!" << endl;
}

inline void Cat::type() const
{
    cout << "Cat ";
    DomesticAnimal::type();
}

inline void Cat::print() const
{
    DomesticAnimal::print();
    cout << "Length of wool: " << wool <<" cm"<< endl;
    cout << endl;
}


