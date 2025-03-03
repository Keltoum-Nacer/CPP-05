#include"ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    try
    {
        Bureaucrat crat("koko", 105);
        ShrubberyCreationForm bery("home");
        bery.beSigned(crat);
        crat.executeForm(bery);
        std::cout << "-----------------" << std::endl;
        RobotomyRequestForm request("form");
        request.beSigned(crat);
        crat.executeForm(request);
        std::cout << "-----------------" << std::endl;
        PresidentialPardonForm Zaphod("desk");
        Zaphod.beSigned(crat);
        crat.executeForm(Zaphod);
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}
