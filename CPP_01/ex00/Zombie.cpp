#include "Zombie.hpp"

Zombie::Zombie() : _name("Nameless Zombie") { 
}

Zombie::Zombie(std::string name) : _name(name) {
}

Zombie::~Zombie() {
    std::cout << _name << " is destroyed!" << std::endl;
}
void Zombie::announce(void) {
    std::cout << _name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}