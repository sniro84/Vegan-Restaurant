#include <iostream>

#include "Appetizer.h"
#include "Beverage.h"
#include "MainCourse.h"
#include "OrderItem.h"
#include "Order.h"
#include "Menu.h"
#include "Customer.h"

#include "OrganicAppetizer.h"
#include "GlutenFreeMainCourse.h"

int main(void)
{
    const int NUM_OF_ITEMS = 5;

    /* ------- 1. Creating Items -------- */
    /* Appetizers */
    const char *apNames[NUM_OF_ITEMS] = 
    {
        "appetizer1", "appetizer2", "appetizer3", "appetizer4", "appetizer5" 
    };
    const char *apDescriptions[NUM_OF_ITEMS] = 
    {
        "description1", "description2", "description3", "description4", "description5" 
    };
    int apPrices[NUM_OF_ITEMS] = {10,20,30,40,50};
    Appetizer::e_spiciness apSpiciness[NUM_OF_ITEMS] = 
    {
        Appetizer::HOT,
        Appetizer::MILD,
        Appetizer::NONE,
        Appetizer::MEDIUM,
        Appetizer::HOT
    };
    const char *apAllergenInfos[NUM_OF_ITEMS] = 
    {
        "allerganInfo1", "allerganInfo2", "allerganInfo3", "allerganInfo4", "allerganInfo5" 
    };

    Appetizer *appetizers[NUM_OF_ITEMS];
    for(int i = 0; i<NUM_OF_ITEMS; ++i)
    {
        appetizers[i] = new Appetizer(apNames[i], apDescriptions[i], apPrices[i], apSpiciness[i], apAllergenInfos[i]);
    }

    /* ----------------------------------------- */

    /* MainCourses */
    const char *mcNames[NUM_OF_ITEMS] = 
    {
        "mainCourse1", "mainCourse2", "mainCourse3", "mainCourse4", "mainCourse5" 
    };
    const char *mcDescriptions[NUM_OF_ITEMS] = 
    {
        "description1", "description2", "description3", "description4", "description5" 
    };
    int mcPrices[NUM_OF_ITEMS] = {10,20,30,40,50};
    MainCourse::e_spiciness mcSpiciness[NUM_OF_ITEMS] = 
    {
        MainCourse::HOT,
        MainCourse::MILD,
        MainCourse::NONE,
        MainCourse::MEDIUM,
        MainCourse::HOT
    };
    const char *mcAllergenInfos[NUM_OF_ITEMS] = 
    {
        "allerganInfo1", "allerganInfo2", "allerganInfo3", "allerganInfo4", "allerganInfo5" 
    };

    MainCourse *mainCourses[NUM_OF_ITEMS];
    for(int i = 0; i<NUM_OF_ITEMS; ++i)
    {
        mainCourses[i] = new MainCourse(mcNames[i], mcDescriptions[i], mcPrices[i], mcSpiciness[i], mcAllergenInfos[i]);
    }

    /* ----------------------------------------- */

    /* Beverages */
    const char *bevNames[NUM_OF_ITEMS] = 
    {
        "beverage1", "beverage2", "beverage3", "beverage4", "beverage5" 
    };
    const char *bevDescriptions[NUM_OF_ITEMS] = 
    {
        "description1", "description2", "description3", "description4", "description5" 
    };
    int bevPrices[NUM_OF_ITEMS] = {10,20,30,40,50};
    Beverage::e_size bevSizes[NUM_OF_ITEMS] = 
    {
        Beverage::SMALL,
        Beverage::MEDIUM,
        Beverage::LARGE,
        Beverage::LARGE,
        Beverage::MEDIUM
    };

    Beverage *beverages[NUM_OF_ITEMS];
    for(int i = 0; i<NUM_OF_ITEMS; ++i)
    {
        beverages[i] = new Beverage(bevNames[i], bevDescriptions[i], bevPrices[i], bevSizes[i]);
    }
    
    /* Organic Appetizer */
    const char *orApName = "Organic Appetizer";
    const char *orApDescription = "This is organic Appetizer"; 
    int orApPrice = 10;
    OrganicAppetizer::e_spiciness orApSpiciness = OrganicAppetizer::HOT; 
    const char *orApAllergenInfos = "Allergan info of organic appetizer";
    const char *orgCertification = "organic appetizer certification";
     
    OrganicAppetizer *organicAppetizer = 
        new OrganicAppetizer(orApName, orApDescription, orApPrice, orApSpiciness, orApAllergenInfos, orgCertification);

    /* Gluten-Free Main Course */
    const char *gfMcName = "Gluten Free Main Course";
    const char *gfMcDescription = "This is Gluten Free Main Course"; 
    int gfMcPrice = 10;
    GlutenFreeMainCourse::e_spiciness gfMcSpiciness = GlutenFreeMainCourse::HOT; 
    const char *gfMcAllergenInfos = "Allergan info of Gluten Free Main Course";
    const char *gfMcCertification = "Gluten Free Main Course certification";
     
    GlutenFreeMainCourse *glutenFreeMainCourse = 
        new GlutenFreeMainCourse(gfMcName, gfMcDescription, gfMcPrice, gfMcSpiciness, gfMcAllergenInfos, gfMcCertification);

    /* ----------------------------------------- */

    /* ------- 2. Creating Menu -------- */

    Menu menu;

    /* add appetizers */
    for(int i = 0; i<NUM_OF_ITEMS; ++i)
    {
        MenuItem &item = *appetizers[i]; 
        menu.addItem(item);
    }

    /* add beverages */
    for(int i = 0; i<NUM_OF_ITEMS; ++i)
    {
        MenuItem &item = *beverages[i]; 
        menu.addItem(item);
    }

    /* add main courses */
    for(int i = 0; i<NUM_OF_ITEMS; ++i)
    {
        MenuItem &item = *mainCourses[i]; 
        menu.addItem(item);
    }

    /* add organic appetizer */

    
    /* display menu */

    /* add item to menu */

    /* remove item from menu */

    /* recieve order from client */

    /* display order details */

    /* update order details */

    /* show items which are spicy */

    /* Deallocation of memory */
    for(int i = 0; i<NUM_OF_ITEMS; ++i)
    {
        delete appetizers[i];
        delete mainCourses[i];
    }
    delete organicAppetizer;
    delete glutenFreeMainCourse;


    return (0);
}