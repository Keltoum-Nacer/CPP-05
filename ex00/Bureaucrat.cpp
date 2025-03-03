#include"Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("") , grade(150)
{
}

Bureaucrat::Bureaucrat(const std::string& crat, int n) : name(crat)
{
        if (n < 1)
            throw GradeTooHighException();
        else if (n > 150)
            throw GradeTooLowException();
        grade = n;
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
    grade--;
    if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
   
}

void Bureaucrat::decrement()
{
    grade++;
    if (grade > 150)
        throw GradeTooLowException();
    else if (grade < 1)
        throw GradeTooHighException();

}

std::ostream &operator << (std::ostream &out, Bureaucrat &crat)
{
    out << crat.getName() << ", bureaucrat grade " << crat.getGrade();
    return(out);
}
