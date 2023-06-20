/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 09:24:50 by jlimones          #+#    #+#             */
/*   Updated: 2023/06/20 11:53:29 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

# define STR_DEBUG "DEBUG"

# define DEBUG "[DEBUG]\nI love having extra bacon for my 7XL-double-cheese-"\
	"triple-pickle-specialketchup burger. I really do!"
# define INFO  "[INFO]\nI cannot believe adding extra bacon costs more "\
	"money. You didn't put enough bacon in my burger! If you did, I wouldn't "\
	"be asking for more!"
# define WARNING "[WARNING]\nI think I deserve to have some extra bacon "\
	"for free. I've been coming for years whereas you started working here "\
	"since last month."
# define ERROR "[ERROR]\nThis is unacceptable! "\
	"I want to speak to the manager now."

class Harl
{
private:
    void debug( void );
    void info( void );
    void warning( void );
    void error( void );
public:
    Harl();
    ~Harl();
void complain( std::string level );
    
};

#endif