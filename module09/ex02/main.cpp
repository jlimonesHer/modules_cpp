/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:25:42 by jlimones          #+#    #+#             */
/*   Updated: 2023/09/15 18:23:34 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void printVector(std::vector<int> vec) {
    for (size_t i = 0; i < vec.size(); i++) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
}

void printlst(std::list<int> lst) {
    while (lst.size() > 0) {
        std::cout << lst.front() << " ";
        lst.pop_front();
    }
    std::cout << std::endl;
}

bool digitError(std::string argv) {
    bool digit = true;
    for (size_t i = 0; i < argv.size(); i++) {
        if (!isdigit(argv[i])) {
            digit = false;
            break ;
        }   
    }
    return digit;
}

double medirTiempo(void (*func)()) {
    clock_t inicio = clock();
    
    // Llama a la función que deseas medir
    func();
    
    clock_t fin = clock();
    
    // Calcula el tiempo transcurrido en segundos
    double tiempoTranscurrido = static_cast<double>(fin - inicio) / CLOCKS_PER_SEC;
    
    return tiempoTranscurrido;
}

void displayTime(int range, clock_t tmStart, clock_t tmEnd, std::string container) {
    double temp = static_cast<double>(tmEnd - tmStart)/(CLOCKS_PER_SEC/ 1000000.0);
    std::cout   << "Time to process a range of " << range << " elements with std::" 
                << container << ": " << temp << std::endl;
}

int main(int argc, char *argv[]) {
    std::vector<int> vec;
    std::vector<int> vectemp;
    std::list<int> lst;
    std::list<int> lsttemp;
    clock_t tmStart;
    clock_t tmEnd;
    int range;
    
    if (argc < 2) {
        std::cout << "Missing Arguments\n";
        return 1;
    }
    for (int i = 1; i < argc; i++){
        if (atoi(argv[i]) < 0 || !digitError(argv[i])) {
            std::cout << "Error\n";
            return 1;
        }
        vec.push_back(atoi(argv[i]));
    }
    for (int i = 1; i < argc; i++){
        if (atoi(argv[i]) < 0 || !digitError(argv[i])) {
            std::cout << "Error\n";
            return 1;
        }
        lst.push_back(atoi(argv[i]));
    }
    range = vec.size();
    std::cout << "\033[0;33mBefore vector: \033[m";
    printVector(vec);
    std::cout << "\033[0;34mAfter vector: \033[m";
    tmStart = clock();
    vectemp = PmergeMe::mergeSort(vec);
    tmEnd = clock();
    printVector(vectemp);
    displayTime(range, tmStart, tmEnd, "Vector"); 
    std::cout << "\033[0;33mBefore list: \033[m";
    printlst(lst);
    std::cout << "\033[0;34mAfter list: \033[m";
    tmStart = clock();
    lsttemp = PmergeMe::mergeSortlst(lst);
    tmEnd = clock();
    printlst(lsttemp);
    displayTime(range, tmStart, tmEnd, "List"); 
    return 0;
}