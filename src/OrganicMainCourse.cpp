#include <iostream>
using namespace std;

#include <string.h>
#include "../include/OrganicMainCourse.h"

/* Ctor */
OrganicMainCourse::OrganicMainCourse(const char *name, const char *description, int price,
                                         e_spiciness spiciness, const char *allergenInfo, const char *orgCertification)
    : MainCourse(name, description, price, spiciness, allergenInfo)
{
    cout << "--- OrganicMainCourse Ctor ---" << endl;

    setOrgCertification(orgCertification);
}

/* CCtor */
OrganicMainCourse::OrganicMainCourse(const OrganicMainCourse &other) : MainCourse(other)
{
    cout << "--- OrganicMainCourse CCtor ---" << endl;

    *this = other;
}

/* Dtor */
OrganicMainCourse::~OrganicMainCourse()
{
    cout << "--- OrganicMainCourse Dtor ---" << endl;
    delete [] m_orgCertification;
}

/* Assignment Operator */
OrganicMainCourse &OrganicMainCourse::operator=(const OrganicMainCourse &other)
{
    cout << "--- OrganicMainCourse Assignment operator ---" << endl;

    MainCourse::operator=(other);
    setOrgCertification(other.m_orgCertification);

    return *this;
}

/* Getters */
const char *OrganicMainCourse::getOrgCertification() const
{
    return m_orgCertification;    
}

/* Setters */
void OrganicMainCourse::setOrgCertification(const char *certification)
{
    m_orgCertification = new char[strlen(certification) + 1];
    strcpy(m_orgCertification, certification);
}

/* toOs */
void OrganicMainCourse::toOs(std::ostream &os) const
{
    os << "Item Organic Certification: " << m_orgCertification << endl;
}
