/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <josec.limones@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:10:18 by jlimones          #+#    #+#             */
/*   Updated: 2023/09/14 10:43:04 by jlimones         ###   ########.fr       */
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

        void insertNumber(std::string);
        bool isInputValid(std::string);
        bool saveInput(std::string);
};

#endif
