#ifndef __ORDER_H_
#define __ORDER_H_

#include <iostream>

#include "OrderItem.h"
#include "Customer.h"

class Order
{
public:
    Order(int capacity, Customer &customer, const char *remarks);
    Order(const Order &other);
    ~Order();
    Order &operator=(const Order &other);
    const Order &operator+=(const OrderItem &item);
    const Order &operator-=(const OrderItem &item);
    friend std::ostream &operator<<(std::ostream &os, const Order &o);

    void recieveOrder(int capacity, Customer &customer, const char *remarks);
    void printOrder() const;
    void updateOrder(int capacity, Customer &customer, const char *remarks);
    void deleteOrder();
    OrderItem **getItemsList() const;
    Customer &getCustomer() const;
    const char *getRemarks() const;
    void addItem(OrderItem *item);
    void setCustomer(Customer &customer);
    void setRemarks(const char *remarks);

private:
    OrderItem **m_itemsList;
    static int m_itemsCount;
    int m_capacity;
    Customer *m_customer;
    char *m_remarks;
};

int Order::m_itemsCount = 0;

#endif // __ORDER_H_