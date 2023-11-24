#include <iostream>
using namespace std;

#include <string.h>  /* strcpy */
#include "../include/Appetizer.h"

/* Ctor */
Appetizer::Appetizer(const char *name, const char *description, int price,
           e_spiciness spiciness, const char *allergenInfo) : MenuItem(name, description, price )
{
    cout << "--- Appetizer Ctor ---" << endl;

    setSpiciness(spiciness);
    setAllergenInfo(allergenInfo);
}

/* CCtor */
Appetizer::Appetizer(const Appetizer &other) : MenuItem(other)
{
    cout << "--- Appetizer CCtor ---" << endl;

    *this = other;
}

/* Dtor */
Appetizer::~Appetizer()
{
    cout << "--- Appetizer Dtor ---" << endl;
    delete [] m_allergenInfo;
}

/* Assignment Operator */
Appetizer &Appetizer::operator=(const Appetizer &other)
{
    cout << "--- Appetizer Assignment operator ---" << endl;

    MenuItem::operator=(other);
    setSpiciness(other.m_spiciness);
    setAllergenInfo(other.m_allergenInfo);

    return *this;
}

/* Getters */
Appetizer::e_spiciness Appetizer::getSpiciness() const
{
    return m_spiciness;
}

const char *Appetizer::getAllergenInfo() const
{
    return m_allergenInfo;    
}

/* Setters */
void Appetizer::setAllergenInfo(const char *allergenInfo)
{
    m_allergenInfo = new char[strlen(allergenInfo) + 1];
    strcpy(m_allergenInfo, allergenInfo);
}

void Appetizer::setSpiciness(e_spiciness spiciness)
{
    m_spiciness = spiciness;
}

/* toOs */
void Appetizer::toOs(std::ostream &os) const
{
    os << "Item Spiciness: " << m_spiciness << endl;
    os << "Item Allergen Info: " << m_allergenInfo << endl;
}
