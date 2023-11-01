#ifndef __GLUTENFREE_MAINCOURSE_H_
#define __GLUTENFREE_MAINCOURSE_H_

#include "MainCourse.h"

class GlutenFreeMainCourse : public MainCourse
{
public:
    GlutenFreeMainCourse(const char *name, const char *description, int price,
              e_spiciness spiciness, const char *allergenInfo, const char *glutenFreeCertification);
    GlutenFreeMainCourse(const GlutenFreeMainCourse &other);
    virtual ~GlutenFreeMainCourse();
    GlutenFreeMainCourse &operator=(const GlutenFreeMainCourse &other);

    virtual void toOs(std::ostream &os) const override;

    char *getGlutenFreeCertification() const;
    void setGlutenFreeCertification(const char *glutenFreeCertification);

protected:
    char *m_glutenFreeCertification;
};

#endif // __GLUTENFREE_MAINCOURSE_H_