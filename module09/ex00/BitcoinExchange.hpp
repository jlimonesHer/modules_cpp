/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <josec.limones@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 10:52:19 by jlimones          #+#    #+#             */
/*   Updated: 2023/09/12 10:15:41 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

# define INDEXYEAR 4
# define INDEXMONTH 6
# define INDEXDAY 9
# define VALUE 14
# define PIPE  11
# define MIDDLEDASH1  5
# define MIDDLEDASH2  8
# define DATABASE  "data.csv"

# include <iostream>
# include <map>
# include <ctime>
# include <fstream>
# include <sstream>
# include <string>
# include <climits>

class BitcoinExchange
{
    private:
        std::map<std::time_t, float> dateValue;
        std::map<std::time_t, float> inputValue;
        struct tm   tm;
        std::time_t convertTime_t(std::string& date);

    public:
        BitcoinExchange();
        BitcoinExchange(std::string file);
        ~BitcoinExchange();
        BitcoinExchange(BitcoinExchange const &copy);
        BitcoinExchange	&operator=(BitcoinExchange const &copy);
        BitcoinExchange	&operator<(BitcoinExchange const &copy);

        bool parserDate(std::string& date);
        bool parserYear(std::string& year);
        bool parserMonth(std::string& month);
        bool parserDay(std::string& day);
                
        //void saveDataBase(std::string nameDatabase);
        void readDatabase( void );
        void readInput(std::string& input);
        void saveData(std::string& date, std::string& value);
        float searchValue(time_t key);
        std::string getDateInput(std::string input);
        float getValueInput(std::string input);
       // typedef typename std::map<T>::container_type::iterator iter;

        class fileNotFoundException;
        class dateNotValid;
        class valueNotValid;
};


#endif
