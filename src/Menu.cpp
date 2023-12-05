#include <iostream>
using namespace std;

#include <string.h> /* strcpy */
#include "../include/Menu.h"
#include "../include/MenuItem.h"

/* Ctor */
Menu::Menu()
{
    cout << "--- Menu Ctor ---" << endl;

    const int INITIAL_CAPACITY = 40;

    m_allItems = new MenuItem*[INITIAL_CAPACITY];
    m_capacity = INITIAL_CAPACITY;
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
    int indexToDelete = -1;

    // Find the index of the item to delete
    for (int i = 0; i < m_itemsCounter; ++i)
    {
        if (*m_allItems[i] == m) // calling equality operator
        {
            indexToDelete = i;
            break;
        }
    }

    // If the item is found, delete it and shift the remaining items
    if (indexToDelete != -1)
    {
        delete m_allItems[indexToDelete];

        // Shift the remaining items to fill the gap
        for (int i = indexToDelete; i < m_itemsCounter - 1; ++i)
        {
            m_allItems[i] = m_allItems[i + 1];
        }

        --m_itemsCounter;
    }
    else
    {
        cout << "Item not found in the menu." << endl;
    }
}
