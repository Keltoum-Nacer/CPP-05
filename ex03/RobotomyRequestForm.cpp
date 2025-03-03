
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): Form("", "", 72, 45){}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("", target, 72, 45){}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : Form(other){}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm & other)
{
    if (this != &other)
        Form::operator=(other);
    return(*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {}

Form* RobotomyRequestForm::createForm(std::string target)
{
    return (new RobotomyRequestForm(target));
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
    Form::checkForm(executor);
    std::srand(std::time(0)); // seed the random number generator with the current time.
    if (std::rand() % 2)
        std::cout << getTarget() << " has been robotomized successfully!"<< std::endl;
    else
        std::cout << "the robotomy failed!" << std::endl;
}
