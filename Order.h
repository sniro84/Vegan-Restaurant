#ifndef __ORDER_H_
#define __ORDER_H_

#include <iostream>

#include "OrderItem.h"
#include "Customer.h"

class Order
{
public:
    Order(OrderItem **itemsList, Customer *customer, char *remarks);
    Order(const Order &other);
    ~Order();
    Order &operator=(const Order &other);
    const Order &operator+=(const OrderItem &item);
    const Order &operator-=(const OrderItem &item);
    friend std::ostream &operator<<(std::ostream &os, const Order &o);

    void recieveOrder(OrderItem **items, Customer *customer, char *remarks);
    void printOrder();
    void updateOrder(OrderItem **items, Customer *customer, char *remarks);
    void deleteOrder();

    OrderItem **getItemsList() const;
    Customer *getCustomer() const;
    char *getRemarks() const;

    void setItemsList(OrderItem **itemsList);
    void setCustomer(Customer *customer);
    void setRemarks(char *remarks);

private:
    OrderItem **m_itemsList;
    Customer *m_customer;
    char *m_remarks;
};

#endif // __ORDER_H_