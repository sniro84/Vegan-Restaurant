#ifndef __BEVERAGE_H_
#define __BEVERAGE_H_

#include "MenuItem.h"

enum e_size
{
    SMALL,
    MEDIUM,
    LARGE
};

class Beverage : public MenuItem
{
public:
    Beverage(const char *name, const char *description, int price, e_size size);
    Beverage(const Beverage &other);
    virtual ~Beverage();

    virtual void show() const override;

    e_size getSize() const;
    void setSize(e_size size);

private:
    e_size m_size;
};

#endif // __BEVERAGE_H_