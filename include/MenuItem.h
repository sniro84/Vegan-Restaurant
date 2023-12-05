#ifndef __MENUITEM_H_
#define __MENUITEM_H_

#include <iostream>

class MenuItem
{
public:
    MenuItem(const char *name, const char *description, int price);
    MenuItem(const MenuItem &other);
    virtual ~MenuItem();
    MenuItem &operator=(const MenuItem &other);
    bool operator<(const MenuItem &other) const;
    bool operator>(const MenuItem &other) const;
    bool operator==(const MenuItem &other) const;
    friend std::ostream &operator<<(std::ostream &os, const MenuItem &m);
    virtual void toOs(std::ostream &os) const {};

    const char *getName() const;
    const char *getDescription() const;
    int getPrice() const;
    void setName(const char *name);
    void setDescription(const char *description);
    void setPrice(const int price);

protected:
    char *m_name;
    char *m_description;
    int m_price;
};

#endif // __MENUITEM_H_