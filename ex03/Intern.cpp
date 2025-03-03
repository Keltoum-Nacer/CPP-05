#include"Intern.hpp"

Intern::Intern(){}

Intern::Intern(const Intern &other)
{
    *this = other;
}

Intern& Intern::operator=(const Intern &other)
{
    if (this != &other)
        *this = other;
    return(*this);
}

Intern::~Intern(){}

Form* Intern::makeForm(std::string name, std::string target)
{
    std::string names[3] = {"Shrubbery Creation", "Robotomy Request", "Presidential Pardon"};
    Form* (*Forms[3])(std::string target) = {&ShrubberyCreationForm::createForm,
                      &RobotomyRequestForm::createForm,
                      &PresidentialPardonForm::createForm};
    int i = 0;
    while(i < 3)
    {
        if (names[i] == name)
        {
            std::cout << "Intern creates " << names[i] << " Form!" << std::endl;
            return(Forms[i](target));
        }
        i++;
    }
    std::cerr << "this form " << name << " doesn't exist!" << std::endl;
    return NULL;
}

