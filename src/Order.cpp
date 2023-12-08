#include <iostream>
using namespace std;

#include <string.h> /* strcpy, strlen */
#include "../include/Order.h"

int Order::m_itemsCount = 0;

/* Ctor */
Order::Order(const Customer &customer, const char *remarks)
{
    const int INITIAL_CAPACITY = 20;

    // Initialize customer and remarks
    m_customer = new Customer(customer);
    m_remarks = new char[strlen(remarks) + 1];
    strcpy(m_remarks, remarks);

    // Initialize itemsList and capacity
    m_itemsList = new OrderItem *[INITIAL_CAPACITY];
    m_capacity = INITIAL_CAPACITY;

    // Initialize itemsCount
    m_itemsCount = 0;
}

/* CCtor */
Order::Order(const Order &other)
{
    cout << "--- Order CCtor ---" << endl;

    *this = other;
}

/* Dtor */
Order::~Order()
{
    cout << "--- Order Dtor ---" << endl;

    delete[] m_customer;
    delete[] m_remarks;

    for (int i = 0; i < m_itemsCount; ++i)
    {
        delete m_itemsList[i];
    }
    delete[] m_itemsList;

    m_itemsCount = 0;
}

/* Assignment Operator */
Order &Order::operator=(const Order &other)
{
    if (this != &other)
    {
        delete[] m_customer;
        setCustomer(*other.m_customer);

        delete[] m_remarks;
        setRemarks(other.m_remarks);

        for (int i = 0; i < m_itemsCount; ++i)
        {
            delete m_itemsList[i];
        }
        delete[] m_itemsList;

        m_itemsList = new OrderItem *[other.m_capacity];
        for (int i = 0; i < other.m_itemsCount; ++i)
        {
            m_itemsList[i] = other.m_itemsList[i];
        }
        
        m_capacity = other.m_capacity;
    }

    return *this;
}

const Order &Order::operator+=(const OrderItem &item)
{
    this->addItem(item);
    return *this;
}

const Order &Order::operator-=(const OrderItem &item)
{
    this->removeItem(item);
    return *this;
}

/* OStream Operator */
std::ostream &operator<<(std::ostream &os, const Order &ord)
{
    os << "Order Information:" << endl;
    os << "Customer: " << ord.getCustomer() << endl;
    os << "Remarks: " << ord.getRemarks() << endl;
    os << "Items:" << endl;

    OrderItem **itemsList = ord.getItemsList();
    for (int i = 0; i < Order::m_itemsCount; ++i)
    {
        os << "Item " << i + 1 << ":" << endl;
        os << *itemsList[i] << endl;
    }

    return os;
}

/* Getters */
OrderItem **Order::getItemsList() const
{
    return m_itemsList;
}

Customer *Order::getCustomer() const
{
    return m_customer;
}

const char *Order::getRemarks() const
{
    return m_remarks;
}

/* Setters */
void Order::setCustomer(const Customer &customer)
{
    delete m_customer;
    m_customer = new Customer(customer);
}

void Order::setRemarks(const char *remarks)
{
    delete [] m_remarks;
    strcpy(m_remarks, remarks);
}

void Order::addItem(const OrderItem &item)
{
    this->m_itemsList[m_itemsCount] = new OrderItem(item);
    ++m_itemsCount;
}

void Order::removeItem(const OrderItem &item)
{
    --m_itemsCount;
    delete m_itemsList[m_itemsCount];
}

void Order::updateOrder(const Customer &customer, const char *remarks)
{
    setCustomer(customer);
    setRemarks(remarks);
}



