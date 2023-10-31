#ifndef __CUSTOMER_H_
#define __CUSTOMER_H_

class Customer
{
public:
    Customer(char *name, char *address, char *paymentDetails);
    Customer(const Customer &other);
    ~Customer();

    void show() const;

    char *getName() const;
    char *getAddress() const;
    char *getPaymentDetails() const;

    void setName(char *name);
    void setAddress(char *address);
    void setPaymentDetails(char *paymentDetails);

private:
    char *m_name;
    char *m_address;
    char *m_paymentDetails;
};

#endif // __CUSTOMER_H_