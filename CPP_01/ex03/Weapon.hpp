#include <iostream>

class Weapon
{
    private:
        std::string _type;
    public:
        std::string& getType() const;
        void setType(std::string new_type);
};