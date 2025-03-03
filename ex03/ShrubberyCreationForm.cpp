#include"ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("", "", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("", target, 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &form): Form(form) {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &form)
{
    if (this != &form)
        Form::operator=(form);
    return(*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

Form* ShrubberyCreationForm::createForm(std::string target)
{
    return(new ShrubberyCreationForm(target));
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    Form::checkForm(executor);
    std::ofstream file;
    file.open((getTarget()+ "_shrubbery").c_str());
    if (!file.is_open())
    {
        std::cerr<< "Error opening file!" << std::endl;
        return;
    }
    file << "      ^\n     ^^^\n    ^^^^^\n   ^^^^^^^\n  ^^^^^^^^^\n ^^^^^^^^^^^\n      ||\n";
    file.close();
}
