#ifndef __ORDER_H_
#define __ORDER_H_

#include "OrderItem.h"
#include "Customer.h"

class Order
{
public:
    Order(OrderItem **itemsList, Customer *customer, char *remarks);
    Order(const Order &other);
    ~Order();

    void show() const;

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