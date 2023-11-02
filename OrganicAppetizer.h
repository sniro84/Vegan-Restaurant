#ifndef __ORGANIC_APPETIZER_H_
#define __ORGANIC_APPETIZER_H_

#include "Appetizer.h"

class OrganicAppetizer : public Appetizer
{
public:
    OrganicAppetizer(const char *name, const char *description, int price,
              e_spiciness spiciness, const char *allergenInfo, const char *orgCertification);
    OrganicAppetizer(const OrganicAppetizer &other);
    virtual ~OrganicAppetizer();
    OrganicAppetizer &operator=(const OrganicAppetizer &other);

    virtual void toOs(std::ostream &os) const override;

    const char *getOrgCertification() const;
    void setOrgCertification(const char *orgCertification);

protected:
    char *m_orgCertification;
};

#endif // __ORGANIC_APPETIZER_H_