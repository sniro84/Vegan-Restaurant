#include <iostream>
using namespace std;

#include <string.h>
#include "../include/OrganicAppetizer.h"

/* Ctor */
OrganicAppetizer::OrganicAppetizer(const char *name, const char *description, int price,
                                         e_spiciness spiciness, const char *allergenInfo, const char *orgCertification)
    : Appetizer(name, description, price, spiciness, allergenInfo)
{
    cout << "--- OrganicAppetizer Ctor ---" << endl;

    setOrgCertification(orgCertification);
}

/* CCtor */
OrganicAppetizer::OrganicAppetizer(const OrganicAppetizer &other) : Appetizer(other)
{
    cout << "--- OrganicAppetizer CCtor ---" << endl;

    *this = other;
}

/* Dtor */
OrganicAppetizer::~OrganicAppetizer()
{
    cout << "--- OrganicAppetizer Dtor ---" << endl;
    delete [] m_orgCertification;
}

/* Assignment Operator */
OrganicAppetizer &OrganicAppetizer::operator=(const OrganicAppetizer &other)
{
    cout << "--- OrganicAppetizer Assignment operator ---" << endl;

    Appetizer::operator=(other);
    setOrgCertification(other.m_orgCertification);

    return *this;
}

/* Getters */
const char *OrganicAppetizer::getOrgCertification() const
{
    return m_orgCertification;    
}

/* Setters */
void OrganicAppetizer::setOrgCertification(const char *certification)
{
    m_orgCertification = new char[strlen(certification) + 1];
    strcpy(m_orgCertification, certification);
}

/* toOs */
void OrganicAppetizer::toOs(std::ostream &os) const
{
    os << "Item Organic Certification: " << m_orgCertification << endl;
}
