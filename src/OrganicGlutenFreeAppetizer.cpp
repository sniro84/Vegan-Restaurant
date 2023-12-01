#include <iostream>
using namespace std;

#include <string.h>
#include "../include/OrganicGlutenFreeAppetizer.h"

/* Ctor */
OrganicGlutenFreeAppetizer::OrganicGlutenFreeAppetizer(const OrganicAppetizer &oa, const GlutenFreeAppetizer &gfa)
    : OrganicAppetizer(oa), GlutenFreeAppetizer(gfa)
{
    cout << "--- OrganicGlutenFreeAppetizer Ctor ---" << endl;
}

/* toOs */
void OrganicGlutenFreeAppetizer::toOs(std::ostream &os) const
{
    OrganicAppetizer::toOs(os);
    GlutenFreeAppetizer::toOs(os);
}
