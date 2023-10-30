#ifndef __MENUITEM_H_
#define __MENUITEM_H_

class MenuItem
{
public:
    char *GetName() const;
    char *GetDescription() const;
    int GetPrice() const;

private:
    char *m_name;
    char *m_description;
    int m_price;
};

#endif // __MENUITEM_H_