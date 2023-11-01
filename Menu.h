#ifndef __MENU_H_
#define __MENU_H_

#include "MenuItem.h"

class Menu
{
public:
    Menu(MenuItem **items);
    Menu(const Menu &other);
    ~Menu();
    Menu &operator=(const Menu &other);
    friend std::ostream &operator<<(std::ostream &os, const Menu &m);

    void printMenu();
    void addToMenu(MenuItem &m);
    void deleteFromMenu(MenuItem &m);
    void showItemsBySpiciness(const char *spiciness);
    void showItemsByAllergenInfo(const char *allergenInfo);

    MenuItem **getItems() const;
    void setItems(const MenuItem **items);

private:
    MenuItem **m_items;
};

#endif // __MENU_H_