#include <iostream>
using namespace std;

#include <string.h> /* strcpy, strlen */
#include "../include/Customer.h"

/* Ctor */
Customer::Customer(const char *name, const char *address, const char *paymentDetails)
{
    cout << "--- Customer Ctor ---" << endl;

    setName(name);
    setAddress(address);
    setPaymentDetails(paymentDetails);
}

/* CCtor */
Customer::Customer(const Customer &other)
{
    cout << "--- Customer CCtor ---" << endl;

    *this = other;
}

/* Dtor */
Customer::~Customer()
{
    cout << "--- Customer Dtor ---" << endl;

    delete [] m_name;
    delete [] m_address;
    delete [] m_paymentDetails;
}

/* Assignment Operator */
Customer &Customer::operator=(const Customer &other)
{
    if (this != &other)
    {
        delete [] m_name;
        setName(other.m_name);

        delete [] m_address;
        setAddress(other.m_address);

        delete [] m_paymentDetails;
        setPaymentDetails(other.m_paymentDetails);
    }

    return *this;
}

/* OStream Operator */
ostream &operator<<(std::ostream &os, const Customer &c)
{
    os << "Customer Name: " << c.m_name << endl;
    os << "Customer Address: " << c.m_address << endl;
    os << "Customer Payment Details: " << c.m_paymentDetails << endl;

    return os;
}

/* Getters */
const char *Customer::getName() const
{
    return m_name;
}

const char *Customer::getAddress() const
{
    return m_address;
}

const char *Customer::getPaymentDetails() const
{
    return m_paymentDetails;
}

/* Setters */
void Customer::setName(const char *name)
{
    m_name = new char[strlen(name) + 1];
    strcpy(m_name, name);
}

void Customer::setAddress(const char *address)
{
    m_address = new char[strlen(address) + 1];
    strcpy(m_address, address);
}

void Customer::setPaymentDetails(const char *paymentDetails)
{
    m_paymentDetails = new char[strlen(paymentDetails) + 1];
    strcpy(m_paymentDetails, paymentDetails);
}

