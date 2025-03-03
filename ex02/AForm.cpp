#include "AForm.hpp"

const char* Form::GradeTooHighException::what()const throw()
{
    return("Error, the grade is too high");
}

const char* Form::GradeTooLowException::what() const throw()
{
    return("Error, the grade is too low");
}

const char* Form::FormNotSignedException::what() const throw()
{
    return("Error, the form is not signed!");
}

Form::Form(): name(""),target(""), is_signed(false), sign_grade(1), execute_grade(150) {}

Form::Form(const std::string &t): name(""), target(t), is_signed(false), sign_grade(1), execute_grade(150) {}

Form::Form(const std::string &n, const std::string &t, const int s_g, const int e_g): name(n), target(t), sign_grade(s_g), execute_grade(e_g)
{
   is_signed = false;
    
    if (sign_grade < 1 || execute_grade < 1)
        throw GradeTooHighException();
    else if (sign_grade > 150 || execute_grade > 150)
        throw GradeTooLowException();
}

Form::Form(const Form &other): name(other.name),target(other.target), is_signed(other.is_signed), sign_grade(other.sign_grade), execute_grade(other.execute_grade) {}

Form& Form::operator=(const Form &other)
{
    if (this != &other)
        is_signed = other.is_signed;
    return(*this);
}

Form::~Form() {}
const std::string Form::getName() const
{
    return(name);
}

const std::string Form::getTarget() const
{
    return(target);
}

bool Form::getIsSigned()
{
    return(is_signed);
}

int Form::getSignGrade()
{
    return(sign_grade);
}

int Form::getExecuteGrade()
{
    return(execute_grade);
}

void Form::beSigned(Bureaucrat &crat) 
{
    try
    {
        if (crat.getGrade() <= sign_grade)
        {
            if (is_signed)
                std::cout << crat.getName() << " couldn't signed "<< name << " because it's already signed!"<< std::endl;
            else
            {
                is_signed = 1;
                std::cout << crat.getName() << " signed " << name << std::endl;
            }
        }
        else
            throw GradeTooLowException();
    }
    catch(GradeTooLowException &e)
    {
        std::cerr << e.what() << '\n';
    }
}

void Form::checkForm(const Bureaucrat &executor) const
{ 
    if (!is_signed)
        throw FormNotSignedException();
    if(executor.getGrade() > execute_grade)
        throw GradeTooLowException();
}

std::ostream& operator<<(std::ostream &out, Form &form)
{
    out<< "name : " << form.getName() << std::endl; 
    out<< "is signed : " << form.getIsSigned() << std::endl; 
    out<< "sign grade : " << form.getSignGrade() << std::endl; 
    out<< "execute grade : " << form.getExecuteGrade() << std::endl; 
    return out;
}

