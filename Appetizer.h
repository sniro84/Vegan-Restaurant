#ifndef __APPETIZER_H_
#define __APPETIZER_H_

#include "MenuItem.h"



class Appetizer : public MenuItem
{
public:
    enum e_spiciness {NONE, MILD, MEDIUM, HOT};
    Appetizer(const char *name, const char *description, int price,
              e_spiciness spiciness, const char *allergenInfo);
    Appetizer(const Appetizer &other);
    virtual ~Appetizer();

    virtual void show() const override;

    e_spiciness getSpiciness() const;
    char *getAllergenInfo() const;
    void setSpiciness(e_spiciness spiciness);
    void setAllergenInfo(const char *allergenInfo);

protected:
    e_spiciness m_spiciness;
    char *m_allergenInfo;
};

#endif // __APPETIZER_H_