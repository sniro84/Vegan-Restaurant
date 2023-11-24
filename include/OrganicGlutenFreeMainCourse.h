#ifndef __ORGANIC_GLUTENFREE_MAINCOURSE_H_
#define __ORGANIC_GLUTENFREE_MAINCOURSE_H_

#include "OrganicMainCourse.h"
#include "GlutenFreeMainCourse.h"

class OrganicGlutenFreeMainCourse : public OrganicMainCourse, public GlutenFreeMainCourse 
{
public:
    OrganicGlutenFreeMainCourse(const OrganicMainCourse &o , const GlutenFreeMainCourse &g);

    virtual void toOs(std::ostream &os) const override;
};

#endif // __ORGANIC_GLUTENFREE_MAINCOURSE_H_