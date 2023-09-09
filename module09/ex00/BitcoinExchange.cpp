/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 10:51:57 by jlimones          #+#    #+#             */
/*   Updated: 2023/09/09 19:42:13 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

class BitcoinExchange::fileNotFoundException: public std::exception
{
    virtual const char *what() const throw() {
        return ("Unable to open the file.");
    }
};

class BitcoinExchange::dateNotValid: public std::exception
{
    virtual const char *what() const throw() {
        return ("The inserted date is not valid.");
    }
};

BitcoinExchange::BitcoinExchange(std::string file)
{
    (void)file;
}

BitcoinExchange::~BitcoinExchange()
{
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &copy): dateValue(copy.dateValue)
{
}

BitcoinExchange	&BitcoinExchange::operator=(const BitcoinExchange &copy)
{
    if (this != &copy)
        *this = copy;
    return *this;
}

void BitcoinExchange::readDatabase( void ) {
    std::ifstream   file(DATABASE);
    std::string  headerLine;
    
    if (!file.is_open())
        throw fileNotFoundException();
    std::getline(file, headerLine);
    for (std::string date; std::getline(file, date, ','); ) {
        std::string value;
        std::getline(file, value);
        saveData(date, value);
    }
}

std::time_t BitcoinExchange::convertTime_t(std::string& date) {
    struct tm   tm;

    memset(&tm, 0, sizeof(tm));
    strptime(date.c_str(), "%Y-%m-%d", &tm);
    return (mktime(&tm));
}

void BitcoinExchange::saveData(std::string& date, std::string& value) {
    
    std::time_t dateDatabase = convertTime_t(date);
    float       valueDatabase = std::atof(value.c_str());

    dateValue[dateDatabase] = valueDatabase;
    //std::cout << "Date: " << dateDatabase << ", value: " << dateValue[dateDatabase] << std::endl;
}

void BitcoinExchange::parserDate(std::string& date) {
    std::string year;
    std::string month;
    std::string day;
    std::cout << date << std::endl;
    try
    {
    for (int i = 0;i < YEAR;i++) {
        if (!isdigit(date[i]))
            throw dateNotValid();
        year += date[i];
    }
    month += date[MONTH - 1];
    month += date[MONTH];
    day += date[DAY - 1];
    day += date[DAY];
    std::cout << year << std::endl;
    std::cout << month << std::endl;
    std::cout << day << std::endl;
   
        parserYear(year);
        parserMonth(month);
        parserDay(day);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void BitcoinExchange::parserYear(std::string& year) {
    if (std::atoi(year.c_str()) < 2009) 
        throw dateNotValid();
}

void BitcoinExchange::parserMonth(std::string& month) {
    if (std::atoi(month.c_str()) > 12) 
        throw dateNotValid();
}

void BitcoinExchange::parserDay(std::string& day) {
    if (std::atoi(day.c_str()) > 31) 
        throw dateNotValid();
}