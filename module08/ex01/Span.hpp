/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <josec.limones@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 20:20:52 by jlimones          #+#    #+#             */
/*   Updated: 2023/09/07 21:35:19 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

# include <iostream>
# include <vector>

//Next, implement two member functions: shortestSpan() and longestSpan()

class Span
{
    private:
        unsigned int n;
        unsigned int numberAdded;
        std::vector<int> lst;
        Span();
    public:
        Span( int );
        ~Span();
        Span(Span const &copy);
        Span	&operator=(Span const &copy);
        void addNumber( int );
        unsigned int getN(void);
        unsigned int getLst(int);
        class missingNumbers;
        class vectorCompleted;
};

#endif
