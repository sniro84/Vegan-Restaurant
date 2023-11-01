#ifndef __ORGANIC_GLUTENFREE_APPETIZER_H_
#define __ORGANIC_GLUTENFREE_APPETIZER_H_

#include "OrganicAppetizer.h"
#include "GlutenFreeAppetizer.h"

class OrganicGlutenFreeAppetizer : public OrganicAppetizer, public GlutenFreeAppetizer 
{
public:
    OrganicGlutenFreeAppetizer(const OrganicAppetizer &o , const GlutenFreeAppetizer &g);

    virtual void toOs(std::ostream &os) const override;
};

#endif // __ORGANIC_GLUTENFREE_APPETIZER_H_