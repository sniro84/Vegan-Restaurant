#include <iostream>
using namespace std;

#include <string.h>
#include "../include/GlutenFreeMainCourse.h"

/* Ctor */
GlutenFreeMainCourse::GlutenFreeMainCourse(const char *name, const char *description, int price,
                                         e_spiciness spiciness, const char *allergenInfo, const char *glutenFreeCertification)
    : MainCourse(name, description, price, spiciness, allergenInfo)
{
    cout << "--- GlutenFreeMainCourse Ctor ---" << endl;

    setGlutenFreeCertification(glutenFreeCertification);
}

/* CCtor */
GlutenFreeMainCourse::GlutenFreeMainCourse(const GlutenFreeMainCourse &other) : MainCourse(other)
{
    cout << "--- GlutenFreeMainCourse CCtor ---" << endl;

    *this = other;
}

/* Dtor */
GlutenFreeMainCourse::~GlutenFreeMainCourse()
{
    cout << "--- GlutenFreeMainCourse Dtor ---" << endl;
    delete [] m_glutenFreeCertification;
}

/* Assignment Operator */
GlutenFreeMainCourse &GlutenFreeMainCourse::operator=(const GlutenFreeMainCourse &other)
{
    cout << "--- GlutenFreeMainCourse Assignment operator ---" << endl;

    MainCourse::operator=(other);
    setGlutenFreeCertification(other.m_glutenFreeCertification);

    return *this;
}

/* Getters */
const char *GlutenFreeMainCourse::getGlutenFreeCertification() const
{
    return m_glutenFreeCertification;    
}

/* Setters */
void GlutenFreeMainCourse::setGlutenFreeCertification(const char *certification)
{
    m_glutenFreeCertification = new char[strlen(certification) + 1];
    strcpy(m_glutenFreeCertification, certification);
}

/* toOs */
void GlutenFreeMainCourse::toOs(std::ostream &os) const
{
    os << "Item Gluten-Free Certification: " << m_glutenFreeCertification << endl;
}
