#ifndef __MAINCOURSE_H_
#define __MAINCOURSE_H_

#include "MenuItem.h"

class MainCourse : public MenuItem
{
public:
    enum e_spiciness {NONE, MILD, MEDIUM, HOT};
    MainCourse(const char *name, const char *description, int price,
              e_spiciness spiciness, const char *allergenInfo);
    MainCourse(const MainCourse &other);
    virtual ~MainCourse();
    MainCourse &operator=(const MainCourse &other);
    virtual void toOs(std::ostream &os) const override
    {
        os << "Item Spiciness: " << m_spiciness << endl;
        os << "Item Allergen Information: " << m_allergenInfo << endl;
    };

    e_spiciness getSpiciness() const;
    const char *getAllergenInfo() const;
    void setSpiciness(e_spiciness spiciness);
    void setAllergenInfo(const char *allergenInfo);

protected:
    e_spiciness m_spiciness;
    char *m_allergenInfo;
};

#endif // __MAINCOURSE_H_