/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <josec.limones@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 10:51:57 by jlimones          #+#    #+#             */
/*   Updated: 2023/09/13 10:25:26 by jlimones         ###   ########.fr       */
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

class BitcoinExchange::valueNotValid: public std::exception
{
    virtual const char *what() const throw() {
        return ("The inserted value is not valid.");
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

BitcoinExchange	&BitcoinExchange::operator<(const BitcoinExchange &copy)
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

/////*/*/*/*/*/*//*/*/*/*/****/

std::string BitcoinExchange::getDateInput(std::string input) {
    std::string date;
    
    for (int i = 0; i <= INDEXDAY;i++) {
        if (input[i] == ' ')
            break ;
        date += input[i];
    }
    if (parserDate(date))
        return date;
    return input;
}

float BitcoinExchange::getValueInput(std::string input) {
    std::string value;
    float       resultValue;
    
    if (input.find("|", PIPE) != std::string::npos) {
        for (size_t i = 13;i < input.length();i++) {
            value += input[i];
        }
    }
    else
        return (-3.0f);
    resultValue = atof(value.c_str());
    if (resultValue < 0.0f)
        return (-1.0f);
    else if (resultValue > 1000.0f)
        return (-2.0f);
    return resultValue;
}

void BitcoinExchange::readInput(std::string& input) {
    std::ifstream   file(input);
    std::string  headerInput;
    std::string  date;
    float  value;
    
    if (!file.is_open())
        throw fileNotFoundException();
    std::getline(file, headerInput);
    for (std::string inputData; std::getline(file, inputData); ) {
        date = getDateInput(inputData);
        value = getValueInput(inputData);
        if (!parserDate(date) || value == -3.0)
            std::cout << "Error: bad input => " << date << std::endl; 
        else if (value == -2.0)
            std::cout << "Error: too large a number." << std::endl; 
        else if (value == -1.0)
            std::cout << "Error: Not a positive number" << std::endl; 
        else {
            std::cout << date << " => " << value  << " = ";
            std::cout << searchValue(convertTime_t(date)) * value << std::endl;
        }
    }
}

std::time_t BitcoinExchange::convertTime_t(std::string& date) {
    

    this->parserDate(date);
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

float BitcoinExchange::searchValue(time_t key) {

    std::map<std::time_t, float>::iterator it;
	it = dateValue.lower_bound(key);
	if (it != dateValue.end() && it->first == key)
		return (it->second);
	if (it != dateValue.begin())
	{
		--it;
		return (it->second);
	}
	return (-1.0);
}

/* PARSER */

bool BitcoinExchange::parserYear(std::string& year) {
    if (std::atoi(year.c_str()) < 2009) 
        return 0;
    return 1;
}

bool BitcoinExchange::parserMonth(std::string& month) {
    if (std::atoi(month.c_str()) > 12) 
        return 0;
    return 1;
}

bool BitcoinExchange::parserDay(std::string& day) {
    if (std::atoi(day.c_str()) > 31) 
        return 0;
    return 1;
}

bool BitcoinExchange::parserDate(std::string& date) {
    std::string year;
    std::string month;
    std::string day;

    for (int i = 0;i < INDEXYEAR;i++) {
        if (!isdigit(date[i]))
            return 0;
        year += date[i];
    }
    if (!isdigit(date[INDEXMONTH - 1]) || !isdigit(date[INDEXMONTH]) ||
        !isdigit(date[INDEXDAY - 1]) || !isdigit(date[INDEXDAY]))
        return 0;
    month += date[INDEXMONTH - 1];
    month += date[INDEXMONTH];
    day += date[INDEXDAY - 1];
    day += date[INDEXDAY];

     if (!parserYear(year) || !parserMonth(month) || !parserDay(day))
        return 0;
    return 1;
}
