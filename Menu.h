#ifndef __MENU_H_
#define __MENU_H_

#include "MenuItem.h"

class Menu
{
public:
    Menu(int capacity);
    Menu(const Menu &other);
    ~Menu();
    Menu &operator=(const Menu &other);
    friend std::ostream &operator<<(std::ostream &os, const Menu &m);

    void printMenu() const;
    void addItem(MenuItem &m);
    void deleteItem(MenuItem &m);
    void showItems(const char *spiciness) const;

    MenuItem **getAllItems() const;

    int getCapacity() const;
    void setCapacity(int capacity);

private:
    MenuItem **m_allItems;
    int m_capacity;
    static int m_itemsCounter;
};

int Menu::m_itemsCounter = 0;

#endif // __MENU_H_