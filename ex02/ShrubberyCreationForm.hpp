#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include"AForm.hpp"
#include<fstream>

class ShrubberyCreationForm : public Form
{
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(const ShrubberyCreationForm& form);
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm& form);
        ~ShrubberyCreationForm();
        void execute(Bureaucrat const & executor) const;
};

#endif