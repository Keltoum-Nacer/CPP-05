/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knacer <knacer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 14:51:59 by knacer            #+#    #+#             */
/*   Updated: 2025/02/21 10:10:52 by knacer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("") , grade(150)
{
}

Bureaucrat::Bureaucrat(const std::string& crat, int n) : name(crat)
{
    try
    {
        if (n < 1)
            throw GradeTooHighException();
        else if (n > 150)
            throw GradeTooLowException();
        grade = n;
    }
    catch(GradeTooHighException& e)
    {
        std::cerr << e.what() << '\n';
    }
    catch(GradeTooLowException& e)
    {
        std::cerr << e.what() << '\n';
    }
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : name(other.name)
{
    grade = other.grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
    if (this != &other)
        grade = other.grade;
    return *this;
}

Bureaucrat::~Bureaucrat()
{
}

const std::string Bureaucrat::getName()
{
    return(name);
}

int Bureaucrat::getGrade()
{
    return(grade);
}

const char* Bureaucrat::GradeTooHighException::what()const throw()
{
    return("Error, the grade is too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return("Error, the grade is too low");
}

void Bureaucrat::increment()
{
    try
    {
        grade--;
        if (grade < 1)
            throw GradeTooHighException();
    }
    catch(GradeTooHighException& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void Bureaucrat::decrement()
{
    try
    {
        grade++;
        if (grade > 150)
            throw GradeTooLowException();
    }
    catch(GradeTooLowException& e)
    {
        std::cerr << e.what() << '\n';
    }    
}

void Bureaucrat::signForm(Form &form)
{
   form.beSigned(*this);
}

std::ostream &operator << (std::ostream &out, Bureaucrat &crat)
{
    out << crat.getName() << ", bureaucrat grade " << crat.getGrade();
    return(out);
}
