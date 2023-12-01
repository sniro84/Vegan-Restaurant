#ifndef __MENU_H_
#define __MENU_H_

#include "MenuItem.h"

class Menu
{
public:
    Menu();
    Menu(const Menu &other);
    ~Menu();
    Menu &operator=(const Menu &other);
    friend std::ostream &operator<<(std::ostream &os, const Menu &m);

    void printMenu() const;
    void addItem(const MenuItem &m);
    void deleteItem(const MenuItem &m);
    void showItems(const char *spiciness) const;

    MenuItem **getAllItems() const;
    int getItemsCounter() const;

private:
    MenuItem **m_allItems;
    int m_capacity;
    int m_itemsCounter;
};

#endif // __MENU_H_