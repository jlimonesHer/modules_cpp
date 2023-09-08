/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 14:35:40 by jlimones          #+#    #+#             */
/*   Updated: 2023/09/08 16:10:30 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <iostream>
# include <stack>
# include <list>



template <class T>
class MutantStack: public std::stack<T>
{
    
    private:

    public:
        MutantStack();
        virtual ~MutantStack();
        MutantStack(MutantStack const &copy);
        MutantStack	&operator=(MutantStack const &copy);
        
        typedef typename std::stack<T>::container_type::iterator iterator;
        
        iterator begin();
        iterator end();
};

# include "MutantStack.tpp"

#endif