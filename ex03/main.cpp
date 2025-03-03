#include"Intern.hpp"

int main()
{
    Intern someRandomIntern;
    Form* rrf;
    rrf = someRandomIntern.makeForm("Presidential Pardon", "Bender");
    delete rrf;
    rrf = someRandomIntern.makeForm("Pardon", "Bender");
    delete rrf;
    rrf = someRandomIntern.makeForm("Robotomy Request", "Bender");
    delete rrf;
}
