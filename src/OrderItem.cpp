#include <iostream>
using namespace std;

#include <string.h> /* strcpy, strlen */
#include "../include/OrderItem.h"

/* Ctor */
OrderItem::OrderItem(const MenuItem &item, int quantity)
{
    cout << "--- OrderItem Ctor ---" << endl;

    m_item = new MenuItem(item);
    m_quantity = quantity;
}

/* CCtor */
OrderItem::OrderItem(const OrderItem &other)
{
    cout << "--- OrderItem CCtor ---" << endl;

    *this = other;
}

/* Dtor */
OrderItem::~OrderItem()
{
    cout << "--- OrderItem Dtor ---" << endl;

    delete m_item;
}

/* Assignment Operator */
OrderItem &OrderItem::operator=(const OrderItem &other)
{
    if (this != &other)
    {
        delete m_item;
        m_item = new MenuItem(*other.m_item);

        m_quantity = other.m_quantity;
    }

    return *this;
}

/* OStream Operator */
ostream &operator<<(std::ostream &os, const OrderItem &oi)
{
    os << "OrderItem: " << oi.m_item << endl;
    os << "OrderItem Quantity: " << oi.m_quantity << endl;

    return os;
}

/* Getters */
MenuItem *OrderItem::getItem() const
{
    return m_item;
}

int OrderItem::getQuantity() const
{
    return m_quantity;
}

/* Setters */
void OrderItem::setItem(const MenuItem &item)
{
    m_item = new MenuItem(item);
}

void OrderItem::setQuantity(int quantity)
{
    m_quantity = quantity;
}

