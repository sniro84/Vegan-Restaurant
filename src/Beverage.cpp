#include <iostream>
using namespace std;

#include "../include/Beverage.h"

/* Ctor */
Beverage::Beverage(const char *name, const char *description, int price, e_size size) 
            : MenuItem(name, description, price)
{
    cout << "--- Beverage Ctor ---" << endl;

    setSize(size);
}

/* CCtor */
Beverage::Beverage(const Beverage &other) : MenuItem(other)
{
    cout << "--- Beverage CCtor ---" << endl;

    *this = other;
}

/* Dtor */
Beverage::~Beverage()
{
    cout << "--- Beverage Dtor ---" << endl;
}

/* Assignment Operator */
Beverage &Beverage::operator=(const Beverage &other)
{
    cout << "--- Beverage Assignment operator ---" << endl;

    MenuItem::operator=(other);
    setSize(other.m_size);

    return *this;
}

/* Getters */
Beverage::e_size Beverage::getSize() const
{
    return m_size;
}

/* Setters */
void Beverage::setSize(e_size size)
{
    m_size = size;
}

/* toOs */
void Beverage::toOs(std::ostream &os) const
{
    os << "Item Size: " << m_size << endl;
}