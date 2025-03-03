#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include<iostream>
#include<ostream>
#include<string>

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
        int getGrade();
        void increment();
        void decrement();
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