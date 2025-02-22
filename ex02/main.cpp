/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knacer <knacer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 18:58:37 by knacer            #+#    #+#             */
/*   Updated: 2025/02/21 10:54:15 by knacer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Form.hpp"

int main()
{
    Form form("kelt", 3, 100);
    Bureaucrat crat("koko", 1);
    Form test;
    std::cout << form;
    std::cout << test;
    //crat.signForm(form);
    form.beSigned(crat);
    crat.signForm(form);
    crat.signForm(test);
}
