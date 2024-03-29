/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:10:18 by jlimones          #+#    #+#             */
/*   Updated: 2023/09/14 17:57:54 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

# include <iostream>
# include <stack>
# include <string>
# include <cstring>

class RPN
{
    private:
        std::stack<int> operands;
    public:
        RPN();
        ~RPN();
        RPN(RPN const &copy);
        RPN	&operator=(RPN const &copy);

        void parserInput(std::string);
        bool saveInput(std::string);
};

#endif
