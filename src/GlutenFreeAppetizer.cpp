#include <iostream>
using namespace std;

#include <string.h>
#include "../include/GlutenFreeAppetizer.h"

/* Ctor */
GlutenFreeAppetizer::GlutenFreeAppetizer(const char *name, const char *description, int price,
                                         e_spiciness spiciness, const char *allergenInfo, const char *glutenFreeCertification)
    : Appetizer(name, description, price, spiciness, allergenInfo)
{
    cout << "--- GlutenFreeAppetizer Ctor ---" << endl;

    setGlutenFreeCertification(glutenFreeCertification);
}

/* CCtor */
GlutenFreeAppetizer::GlutenFreeAppetizer(const GlutenFreeAppetizer &other) : Appetizer(other)
{
    cout << "--- GlutenFreeAppetizer CCtor ---" << endl;

    *this = other;
}

/* Dtor */
GlutenFreeAppetizer::~GlutenFreeAppetizer()
{
    cout << "--- GlutenFreeAppetizer Dtor ---" << endl;
    delete [] m_glutenFreeCertification;
}

/* Assignment Operator */
GlutenFreeAppetizer &GlutenFreeAppetizer::operator=(const GlutenFreeAppetizer &other)
{
    cout << "--- GlutenFreeAppetizer Assignment operator ---" << endl;

    Appetizer::operator=(other);
    setGlutenFreeCertification(other.m_glutenFreeCertification);

    return *this;
}

/* Getters */
const char *GlutenFreeAppetizer::getGlutenFreeCertification() const
{
    return m_glutenFreeCertification;    
}

/* Setters */
void GlutenFreeAppetizer::setGlutenFreeCertification(const char *certification)
{
    m_glutenFreeCertification = new char[strlen(certification) + 1];
    strcpy(m_glutenFreeCertification, certification);
}

/* toOs */
void GlutenFreeAppetizer::toOs(std::ostream &os) const
{
    os << "Item Gluten-Free Certification: " << m_glutenFreeCertification << endl;
}
