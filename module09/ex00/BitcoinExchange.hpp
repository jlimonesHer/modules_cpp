/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 10:52:19 by jlimones          #+#    #+#             */
/*   Updated: 2023/09/09 19:31:20 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

# define YEAR 4
# define MONTH 6
# define DAY 9
# define VALUE 14
# define PIPE  12
# define MIDDLEDASH1  5
# define MIDDLEDASH2  8
# define DATABASE  "data.csv"

# include <iostream>
# include <map>
# include <ctime>
# include <fstream>
# include <sstream>
# include <string>

class BitcoinExchange
{
    private:
        std::map<std::time_t, float> dateValue;
        
        std::time_t convertTime_t(std::string& date);

    public:
        BitcoinExchange();
       BitcoinExchange(std::string file);
        ~BitcoinExchange();
        BitcoinExchange(BitcoinExchange const &copy);
        BitcoinExchange	&operator=(BitcoinExchange const &copy);

        void parserDate(std::string& date);
        void parserYear(std::string& year);
        void parserMonth(std::string& month);
        void parserDay(std::string& day);
                
        //void saveDataBase(std::string nameDatabase);
        void readDatabase( void );
        void saveData(std::string& date, std::string& value);

        class fileNotFoundException;
        class dateNotValid;
};

#endif
