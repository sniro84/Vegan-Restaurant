#ifndef __GLUTENFREE_APPETIZER_H_
#define __GLUTENFREE_APPETIZER_H_

#include "Appetizer.h"

class GlutenFreeAppetizer : public Appetizer
{
public:
    GlutenFreeAppetizer(const char *name, const char *description, int price,
              e_spiciness spiciness, const char *allergenInfo, const char *glutenFreeCertification);
    GlutenFreeAppetizer(const GlutenFreeAppetizer &other);
    virtual ~GlutenFreeAppetizer();
    GlutenFreeAppetizer &operator=(const GlutenFreeAppetizer &other);

    virtual void toOs(std::ostream &os) const override;

    char *getGlutenFreeCertification() const;
    void setGlutenFreeCertification(const char *glutenFreeCertification);

protected:
    char *m_glutenFreeCertification;
};

#endif // __GLUTENFREE_APPETIZER_H_