#ifndef __APPETIZER_H_
#define __APPETIZER_H_

#include "Appetizer.h" 

class Appetizer : public MenuItem
{
public:
    Appetizer(const char* name, const char* description, int price);
    MenuItem(const MenuItem& other);
    virtual ~MenuItem();

    virtual void show() const = 0;

    char* getName() const;
    char* getDescription() const;
    int getPrice() const;
    void setName(const char* name);
    void setDescription(const char* description);
    void setPrice(const int price);

protected:
    char* m_name;
    char* m_description;
    int m_price;
};

#endif // __APPETIZER_H_