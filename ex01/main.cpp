#include"Form.hpp"

int main()
{
    try
    {
        Form form("kelt", 3, 150);
        Bureaucrat crat("koko", 1);
        Form test;
        std::cout << form;
        std::cout << test;
        crat.signForm(test);
        form.beSigned(crat);
        crat.signForm(form);
        crat.signForm(test);
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}
