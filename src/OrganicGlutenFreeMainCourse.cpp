#include <iostream>
using namespace std;

#include <string.h>
#include "../include/OrganicGlutenFreeMainCourse.h"

/* Ctor */
OrganicGlutenFreeMainCourse::OrganicGlutenFreeMainCourse(const OrganicMainCourse &omc, const GlutenFreeMainCourse &gfmc)
    : OrganicMainCourse(omc), GlutenFreeMainCourse(gfmc)
{
    cout << "--- OrganicGlutenFreeMainCourse Ctor ---" << endl;
}

/* toOs */
void OrganicGlutenFreeMainCourse::toOs(std::ostream &os) const
{
    OrganicMainCourse::toOs(os);
    GlutenFreeMainCourse::toOs(os);
}
