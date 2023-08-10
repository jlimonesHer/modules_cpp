#ifndef CHARACTER_HPP
#define CHARACTER_HPP

# include <iostream>

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character: public ICharacter
{
    private:
        std::string name;
        AMateria    *inventory[MAX_SLOT];
        int         n_materia;

    public:
        Character(std::string _name);
        ~Character();
        Character(Character const &copy);
        Character	&operator=(Character const &copy);
        std::string const& getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};

#endif
