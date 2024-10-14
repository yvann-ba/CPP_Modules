#include <iostream>

class Zombie
{
private:
    std::string _name;
public:
    Zombie();
    Zombie(std::string name);
    ~Zombie();
    void announce();
    std::string getName() const;
    void setName(std::string name);
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);
Zombie* zombieHorde(int N, std::string name);