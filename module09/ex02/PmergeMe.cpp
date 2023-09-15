/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:08:23 by jlimones          #+#    #+#             */
/*   Updated: 2023/09/15 16:54:50 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
}

PmergeMe::~PmergeMe()
{
}

PmergeMe::PmergeMe(PmergeMe const &copy):vec(copy.vec)
{
}

PmergeMe	&PmergeMe::operator=(const PmergeMe &copy)
{
    if (this != &copy)
        *this = copy;
    return *this;
}

std::vector<int> PmergeMe::mergeSort(std::vector<int> vec) {
    std::vector<int> left;
    std::vector<int> right;
    if (vec.size() <= 1)
        return vec;
    else {
        int middle = vec.size() / 2;
        for (int i = 0; i < middle;i++) {
            left.push_back(vec[i]);
        }
        for (size_t i = middle; i < vec.size();i++) {
            right.push_back(vec[i]);
        }
        left = mergeSort(left);
        right = mergeSort(right);
        return merge(left, right);
    }
}


std::vector<int> PmergeMe::merge(std::vector<int> left, std::vector<int> right) {
    std::vector<int> result;
    while (left.size() > 0 && right.size() > 0) {
        if(left[0] > right[0]){
            result.push_back(right[0]);   
            right = std::vector<int>(right.begin() + 1, right.end()); 
        } else {
            result.push_back(left[0]);
            left = std::vector<int>(left.begin() + 1, left.end()); 
        }
    }
    for (size_t i = 0; i < right.size(); i++) {
        result.push_back(right[i]);
    }
    while (left.size() > 0) {
        result.push_back(left[0]);
        left = std::vector<int>(left.begin() + 1, left.end()); 
    }
    return result;
}

std::list<int> PmergeMe::mergeSortlst(std::list<int> lst) {
    std::list<int> left;
    std::list<int> right;
    if (lst.size() <= 1)
        return lst;
    else {
        size_t middle = lst.size() / 2;
        while (lst.size() > middle) {
            left.push_back(lst.front());
            lst.pop_front();
        }
        while (lst.size() > 0) {
            right.push_back(lst.front());
            lst.pop_front();
        }
        left = mergeSortlst(left);
        right = mergeSortlst(right);
        return mergelst(left, right);
    }
}

std::list<int> PmergeMe::mergelst(std::list<int> left, std::list<int> right) {
    std::list<int> result;
    while (left.size() > 0 && right.size() > 0) {
        if (left.front() > right.front()){
            result.push_back(right.front());   
            right.pop_front(); 
        } else {
            result.push_back(left.front());
            left.pop_front(); 
        }
    }
    while (right.size() > 0) {
        result.push_back(right.front());
        right.pop_front();
    }
    while (left.size() > 0) {
        result.push_back(left.front());
        left.pop_front();
    }
    // std::list<int> copy(result);
    // std::cout << "Copia: ";
    // printlst(copy);
    // std::cout << "Derecha: ";
    // printlst(right);
    // std::cout << "izq: ";
    // printlst(left);
    return result;
}