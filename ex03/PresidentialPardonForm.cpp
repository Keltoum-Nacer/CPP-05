#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("", "", 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("", target, 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other): Form(other) {}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
    if (this != &other)
        Form::operator=(other);
    return(*this);
}

PresidentialPardonForm::~PresidentialPardonForm() {}

Form* PresidentialPardonForm::createForm(std::string target)
{
    return(new PresidentialPardonForm(target));
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
        Form::checkForm(executor);
        std::cout << "This " << getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl; 
} 
