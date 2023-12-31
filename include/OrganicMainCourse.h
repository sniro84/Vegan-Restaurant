#ifndef __ORGANIC_MAINCOURSE_H_
#define __ORGANIC_MAINCOURSE_H_

#include "MainCourse.h"

class OrganicMainCourse : public MainCourse
{
public:
    OrganicMainCourse(const char *name, const char *description, int price,
              e_spiciness spiciness, const char *allergenInfo, const char *orgCertification);
    OrganicMainCourse(const OrganicMainCourse &other);
    virtual ~OrganicMainCourse();
    OrganicMainCourse &operator=(const OrganicMainCourse &other);

    virtual void toOs(std::ostream &os) const override;

    const char *getOrgCertification() const;
    void setOrgCertification(const char *orgCertification);

protected:
    char *m_orgCertification;
};

#endif // __ORGANIC_MAINCOURSE_H_