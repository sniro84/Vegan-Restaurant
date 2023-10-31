#ifndef __ORDER_ITEM_H_
#define __ORDER_ITEM_H_

#include "MenuItem.h"

class OrderItem
{
public:
    OrderItem(MenuItem *item, int quantity);
    OrderItem(const OrderItem &other);
    ~OrderItem();

    void show() const;

    MenuItem *getItem() const;
    int getQuantity() const;
    void setItem(const MenuItem *item);
    void setQuantity(int quantity);

private:
    MenuItem *m_item;
    int m_quantity;
};

#endif // __ORDER_ITEM_H_