#ifndef __APPETIZER_H_
#define __APPETIZER_H_

#include "MenuItem.h" 

enum eSpiciness { NONE, MILD, MEDIUM, HOT };
    
class Appetizer : public MenuItem
{
public:
    Appetizer(const char* name, const char* description, int price,
              eSpiciness spiciness, const char* allergenInfo); 
    Appetizer(const Appetizer& other);
    virtual ~Appetizer();

    virtual void show() const override;

    eSpiciness getSpiciness() const;
    char* getAllergenInfo() const;

    void setSpiciness(eSpiciness spiciness);
    void setAllergenInfo(const char* allergenInfo);

protected:
    eSpiciness m_spiciness;
    char* m_allergenInfo;
};

#endif // __APPETIZER_H_