

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
        static Form* createForm(std::string target);
        void execute(Bureaucrat const & executor) const;
};

#endif