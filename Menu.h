#ifndef __MENU_H_
#define __MENU_H_

#include "MenuItem.h"

class Menu
{
public:
    Menu(MenuItem **items);
    Menu(const Menu &other);
    ~Menu();

    void show() const;

    MenuItem **getItems() const;
    void setItems(const MenuItem **items);

private:
    MenuItem **m_items;
};

#endif // __MENU_H_