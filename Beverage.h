#ifndef __BEVERAGE_H_
#define __BEVERAGE_H_

#include "MenuItem.h"

class Beverage : public MenuItem
{
public:
    enum e_size {SMALL, MEDIUM, LARGE};
    Beverage(const char *name, const char *description, int price, e_size size);

    virtual void toOs(std::ostream &os) const override;

    e_size getSize() const;
    void setSize(e_size size);

private:
    e_size m_size;
};

#endif // __BEVERAGE_H_