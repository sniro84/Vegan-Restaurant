#ifndef __ORGANIC_GLUTENFREE_MAINCOURSE_H_
#define __ORGANIC_GLUTENFREE_MAINCOURSE_H_

#include "OrganicMainCourse.h"
#include "GlutenFreeMainCourse.h"

class OrganicGlutenFreeMainCourse : public OrganicMainCourse, public GlutenFreeMainCourse 
{
public:
    OrganicGlutenFreeMainCourse(const OrganicMainCourse &o , const GlutenFreeMainCourse &g);
    OrganicGlutenFreeMainCourse(const GlutenFreeMainCourse &other);
    ~OrganicGlutenFreeMainCourse();

    virtual void show() const override;
};

#endif // __ORGANIC_GLUTENFREE_MAINCOURSE_H_