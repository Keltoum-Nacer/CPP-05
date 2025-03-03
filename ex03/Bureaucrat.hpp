#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP


#include<iostream>
#include<string>

#include "AForm.hpp"
class Form;
class Bureaucrat
{
    private:
        const std::string name;
        int grade;
    public:
        Bureaucrat();
        Bureaucrat(const std::string& crat, int n);
        Bureaucrat(const Bureaucrat& other);
        Bureaucrat& operator=(const Bureaucrat& other);
        ~Bureaucrat();
        const std::string getName();
        int getGrade() const;
        void increment();
        void decrement();
        void signForm(Form &form);
        void executeForm(Form const & form);
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

std::ostream &operator << (std::ostream &out, Bureaucrat &crat);

#endif