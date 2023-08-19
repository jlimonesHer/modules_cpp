/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 19:16:37 by jlimones          #+#    #+#             */
/*   Updated: 2023/08/19 19:51:51 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

# include <iostream>

class Form
{
    private:
        std::string const   name;
        bool                isSigned;
        int const           gradeSigned;
        int const           gradeExecute;
        
    public:
        Form(std::string _name, bool _isSigned, int const _gradeSigned, int const _gradeExecute);
        ~Form();
        Form(Form const &copy);
        Form	&operator=(Form const &copy);

        std::string    getName(void)const;
        bool    getIsSigned( void )const;
        int    getGradeSigned( void )const;
        int    getGradeExecute( void )const;

        void    setName( std::string newName );
        void    setIsSigned( bool newSigned );
        void    setGradeSigned( int newGrade );
        void    setGradeExecute( int newGrade );

        class GradeTooHighException;
        class GradeTooLowException;
};

#endif
