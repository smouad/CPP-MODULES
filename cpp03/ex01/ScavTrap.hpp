#include "ClapTrap.hpp"

class ScavTrap:public ClapTrap{
public:
    /* constructors */
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap& src);

    /* overload operator */
    ScavTrap& operator=(const ScavTrap& src);

    /* methostds */
    void attack(const std::string& target);
    void guardGate(void);

    /* distuctor */
    ~ScavTrap();
};
