#ifndef __CUSTOMER_H_
#define __CUSTOMER_H_

#include <iostream>

class Customer
{
public:
    Customer(const char *name, const char *address, const char *paymentDetails);
    Customer(const Customer &other);
    ~Customer();
    Customer &operator=(const Customer &other);
    friend std::ostream &operator<<(std::ostream &os, const Customer &c);

    const char *getName() const;
    const char *getAddress() const;
    const char *getPaymentDetails() const;

    void setName(const char *name);
    void setAddress(const char *address);
    void setPaymentDetails(const char *paymentDetails);

private:
    char *m_name;
    char *m_address;
    char *m_paymentDetails;
};

#endif // __CUSTOMER_H_