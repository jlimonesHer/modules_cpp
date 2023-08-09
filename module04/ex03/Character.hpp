#ifndef CHARACTER_HPP
#define CHARACTER_HPP

# include <iostream>

#include "ICharacter.hpp"
#include "AMateria.hpp"

# define MAX_SLOT 4

class Character: public ICharacter
{
    private:
        std::string _name;
        AMateria *_matreia[MAX_SLOT];

    public:
        Character();
        ~Character();
        Character(Character const &copy);
        Character	&operator=(Character const &copy);
};

#endif
