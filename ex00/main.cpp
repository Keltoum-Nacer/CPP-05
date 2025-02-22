/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knacer <knacer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 18:58:37 by knacer            #+#    #+#             */
/*   Updated: 2025/02/21 10:31:50 by knacer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Bureaucrat.hpp"

int main()
{
    Bureaucrat sukrat("crat", 0);
    Bureaucrat dikart("kart", 150);

    sukrat.increment();
    std::cout << sukrat << std::endl;
    dikart.decrement();
    std::cout << dikart << std::endl;
    sukrat = dikart;
    sukrat.decrement();
    std::cout << sukrat<< std::endl;
}
