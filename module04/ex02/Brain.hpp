/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <josec.limones@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 08:56:02 by jlimones          #+#    #+#             */
/*   Updated: 2023/07/29 09:53:01 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

# include <iostream>

class Brain
{
    protected:
        std::string ideas[100];
    public:
        Brain();
        ~Brain();
        Brain(Brain const &copy);
        Brain	&operator=(Brain const &copy);
        std::string getIdeas(int i);
        void setIdeas(int i, std::string newIdea);
};

#endif
