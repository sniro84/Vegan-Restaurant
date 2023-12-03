#include <iostream>
using namespace std;

#include <string.h> /* strcpy */
#include "../include/Menu.h"
#include "../include/MenuItem.h"

/* Ctor */
Menu::Menu(const int capacity)
{
    cout << "--- Menu Ctor ---" << endl;

    m_allItems = new MenuItem *[capacity];
    m_capacity = capacity;
    m_itemsCounter = 0;
}

/* CCtor */
Menu::Menu(const Menu &other)
{
    cout << "--- Menu CCtor ---" << endl;

    *this = other;
}

/* Dtor */
Menu::~Menu()
{
    cout << "--- Menu Dtor ---" << endl;
    for (int i = 0; i < m_itemsCounter; ++i)
    {
        delete m_allItems[i];
    }
    delete[] m_allItems;
}

/* Assignment Operator */
Menu &Menu::operator=(const Menu &other)
{
    cout << "--- Menu Assignment operator ---" << endl;

    m_allItems = new MenuItem *[other.m_capacity];
    for (int i = 0; i < m_itemsCounter; ++i)
    {
        m_allItems[i] = other.m_allItems[i];
    }

    m_capacity = other.m_capacity;
    m_itemsCounter = other.m_itemsCounter;

    return *this;
}

/* OStream Operator */
ostream &operator<<(std::ostream &os, const Menu &menu)
{
    os << "Menu: " << endl;

    for (int i = 0; i < menu.m_itemsCounter; ++i)
    {
        os << menu.m_allItems[i] << endl;
    }

    return os;
}

/* Add Item */
void Menu::addItem(const MenuItem &m)
{
    if (m_itemsCounter < m_capacity)
    {
        m_allItems[m_itemsCounter] = new MenuItem(m);
        ++m_itemsCounter;
    }
}

/* Delete Item */
void Menu::deleteItem(const MenuItem &m)
{
    
}
