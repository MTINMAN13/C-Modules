#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#pragma once

#include "ClapTrap.hpp"
#include <string>

class ScavTrap : virtual public ClapTrap
{
    public:
        ScavTrap(std::string name);
        ~ScavTrap();
        void guardGate();
};


#endif