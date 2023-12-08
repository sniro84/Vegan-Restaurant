#ifndef __ORDER_H_
#define __ORDER_H_

#include <iostream>

#include "OrderItem.h"
#include "Customer.h"

class Order
{
public:
    Order(const Customer &customer, const char *remarks);
    Order(const Order &other);
    ~Order();
    Order &operator=(const Order &other);
    const Order &operator+=(const OrderItem &item);
    const Order &operator-=(const OrderItem &item);
    friend std::ostream &operator<<(std::ostream &os, const Order &o);

    void addItem(const OrderItem &item);
    void removeItem(const OrderItem &item);
    void updateOrder(const Customer &customer, const char *remarks);

    OrderItem **getItemsList() const;
    Customer *getCustomer() const;
    const char *getRemarks() const;

    void setCustomer(const Customer &customer);
    void setRemarks(const char *remarks);
    
private:
    OrderItem **m_itemsList;
    static int m_itemsCount;
    int m_capacity;
    Customer *m_customer;
    char *m_remarks;
};

#endif // __ORDER_H_