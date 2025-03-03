#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"
class Bureaucrat;
class Form
{
    private:
        const std::string name;
        const std::string target;
        bool is_signed;
        const int sign_grade;   
        const int execute_grade;
    public:
        Form();
        Form(const std::string &t);
        Form(const std::string &n,const std::string &t, const int s_g, const int e_g);
        Form(const Form &other);
        Form& operator=(const Form &other);
        ~Form();
        const std::string getName() const;
        const std::string getTarget() const;
        bool getIsSigned();
        int getSignGrade();
        int getExecuteGrade();
        void beSigned(Bureaucrat &crat);
        void checkForm(const Bureaucrat &executor) const;
        virtual void execute(Bureaucrat const & executor) const = 0;
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

    class FormNotSignedException : public std::exception
    {
        public:
            const char* what() const throw();
    };
};


std::ostream& operator<<(std::ostream &out, Form &form);

#endif
