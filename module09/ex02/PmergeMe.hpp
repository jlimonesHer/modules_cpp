/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:08:37 by jlimones          #+#    #+#             */
/*   Updated: 2023/09/15 18:15:42 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

# include <iostream>
# include <vector>
# include <list>
# include <ctime>

class PmergeMe
{
    private:
        std::vector<int> vec;
        std::list<int> lst;
    public:
        PmergeMe();
        ~PmergeMe();
        PmergeMe(PmergeMe const &copy);
        PmergeMe	&operator=(PmergeMe const &copy);
        static std::vector<int>    mergeSort(std::vector<int> vec);
        static std::vector<int>    merge(std::vector<int> left, std::vector<int> right);
        static std::list<int>    mergeSortlst(std::list<int> vec);
        static std::list<int>    mergelst(std::list<int> left, std::list<int> right);
};

#endif
