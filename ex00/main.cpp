#include"Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat sukrat("crat", 2);

        sukrat.increment();
        sukrat.increment();
        std::cout << sukrat << std::endl;
        sukrat.decrement();
        sukrat.decrement();
        sukrat.decrement();
        std::cout << sukrat << std::endl;
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}
