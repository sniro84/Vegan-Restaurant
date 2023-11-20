#include <iostream>
using namespace std;    

#include <string.h>     // strlen, strcpy
#include "MenuItem.h"

/* Ctor */
MenuItem::MenuItem(const char *name, const char *description, int price)
{
    cout << "--- MenuItem Ctor ---" << endl;
    
    m_price = price;
    setName(name);
    setDescription(description);
}

/* CCtor */
MenuItem::MenuItem(const MenuItem &other)
{
    cout << "--- MenuItem CCtor ---" << endl;

    *this = other;
}

/* Dtor */
MenuItem::~MenuItem()
{
    cout << "--- MenuItem Dtor ---" << endl;
    delete [] m_name;
    delete [] m_description;
}

/* Assignment Operator */
MenuItem &MenuItem::operator=(const MenuItem &other)
{
    if (this != &other)
    {
        m_price = other.m_price;

        delete [] m_name;
        setName(other.m_name);

        delete [] m_description;
        setDescription(other.m_description);
    }

    return *this;
}

/* Less than Operator */
bool MenuItem::operator<(const MenuItem &other) const
{
    return (this->m_price < other.m_price);
}

/* Greater than Operator */
bool MenuItem::operator>(const MenuItem &other) const
{
    return (this->m_price > other.m_price);
}

/* OStream Operator */
ostream &operator<<(std::ostream &os, const MenuItem &mi)
{
    os << "Item Name: " << mi.m_name << endl;
    os << "Item Description: " << mi.m_name << endl;
    os << "Item Price: " << mi.m_price << endl;

    mi.toOs(os);

    return os;
}

/* Getters */
const char *MenuItem::getName() const
{
    return m_name;
}

const char *MenuItem::getDescription() const
{
    return m_description;
}

int MenuItem::getPrice() const
{
    return m_price;
}

/* Setters */
void MenuItem::setName(const char *name)
{
    m_name = new char[strlen(name) + 1];
    strcpy(m_name, name);
}

void MenuItem::setDescription(const char *description)
{
    m_description = new char[strlen(description) + 1];
    strcpy(m_description, description);
}

void MenuItem::setPrice(const int price)
{
    m_price = price;
}

