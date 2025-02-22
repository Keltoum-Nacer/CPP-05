/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knacer <knacer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 09:38:45 by knacer            #+#    #+#             */
/*   Updated: 2025/02/21 11:01:44 by knacer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
class Bureaucrat;
class Form
{
    private:
        const std::string name;
        bool is_signed;
        const int sign_grade;   
        const int execute_grade;
    public:
        Form();
        Form(const std::string &n, const int s_g, const int e_g);
        Form(const Form &other);
        Form& operator=(const Form &other);
        ~Form();
        const std::string getName();
        bool getIsSigned();
        int getSignGrade();
        int getExecuteGrade();
        void beSigned(Bureaucrat &crat);
    class GradeTooHighException : public std::exception
    {
        public:
            const char* what() const throw();  
    };

    class GradeTooLowException : public std::exception
    {
        public:
            const char* what() const throw();  
    };
};


std::ostream& operator<<(std::ostream &out, Form &form);

#endif
