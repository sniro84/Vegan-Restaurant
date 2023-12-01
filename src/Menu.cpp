#include <iostream>
using namespace std;

#include <string.h>  /* strcpy */
#include "../include/Menu.h"
#include "../include/MenuItem.h"

/* Ctor */
Menu::Menu()
{
    cout << "--- Menu Ctor ---" << endl;

    const int CAPACITY = 10;

    m_allItems = new MenuItem*[CAPACITY];
    m_capacity = CAPACITY;
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
    for(int i=0; i<m_itemsCounter; ++i)
    {
        delete m_allItems[i];
    }
    delete [] m_allItems;
}

/* Assignment Operator */
Menu &Menu::operator=(const Menu &other)
{
    cout << "--- Menu Assignment operator ---" << endl;

    m_allItems = new MenuItem*[other.m_capacity];
    for(int i=0; i<m_itemsCounter; ++i)
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
    for(int i=0; i<menu.m_itemsCounter; ++i)
    {
        /* Here I'm trying to call the ostream operator of
           each MenuItem in order to display the menu.
        */
    }

    return os;
}
