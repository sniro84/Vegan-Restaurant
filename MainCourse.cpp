#include <iostream>
using namespace std;

#include <string.h>  /* strcpy */
#include "MainCourse.h"

/* Ctor */
MainCourse::MainCourse(const char *name, const char *description, int price,
           e_spiciness spiciness, const char *allergenInfo) : MenuItem(name, description, price )
{
    cout << "--- MainCourse Ctor ---" << endl;

    setSpiciness(spiciness);
    setAllergenInfo(allergenInfo);
}

/* CCtor */
MainCourse::MainCourse(const MainCourse &other) : MenuItem(other)
{
    cout << "--- MainCourse CCtor ---" << endl;

    *this = other;
}

/* Dtor */
MainCourse::~MainCourse()
{
    cout << "--- MainCourse Dtor ---" << endl;
    delete [] m_allergenInfo;
}

/* Assignment Operator */
MainCourse &MainCourse::operator=(const MainCourse &other)
{
    cout << "--- MainCourse Assignment operator ---" << endl;

    MenuItem::operator=(other);
    setSpiciness(other.m_spiciness);
    setAllergenInfo(other.m_allergenInfo);

    return *this;
}

/* Getters */
MainCourse::e_spiciness MainCourse::getSpiciness() const
{
    return m_spiciness;
}

const char *MainCourse::getAllergenInfo() const
{
    return m_allergenInfo;    
}

/* Setters */
void MainCourse::setAllergenInfo(const char *allergenInfo)
{
    m_allergenInfo = new char[strlen(allergenInfo) + 1];
    strcpy(m_allergenInfo, allergenInfo);
}

void MainCourse::setSpiciness(e_spiciness spiciness)
{
    m_spiciness = spiciness;
}
