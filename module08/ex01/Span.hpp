/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 20:20:52 by jlimones          #+#    #+#             */
/*   Updated: 2023/09/08 13:04:28 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

# include <iostream>
# include <set>
# include <vector>

class Span
{
    private:
        unsigned int N;
        std::set<int> lst;
        Span();
    public:
        Span( int );
        ~Span();
        Span(Span const &copy);
        Span	&operator=(Span const &copy);
        
        unsigned int longestSpan( void );
        unsigned int shortestSpan( void );
        void addNumber( int );
        void generateContainer( void );
        
        unsigned int getN(void);
        void print();

        
        class missingNumbers;
        class vectorCompleted;
};

#endif
