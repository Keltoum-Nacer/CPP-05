#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include"AForm.hpp"
#include<cstdlib>
#include<ctime>

class RobotomyRequestForm : public Form
{
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(const RobotomyRequestForm &other);
        RobotomyRequestForm& operator=(const RobotomyRequestForm &other);
        ~RobotomyRequestForm();
        void execute(Bureaucrat const & executor) const;
};

#endif
