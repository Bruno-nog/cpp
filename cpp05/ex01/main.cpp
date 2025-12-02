/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 17:02:09 by brunogue          #+#    #+#             */
/*   Updated: 2025/12/02 18:53:25 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main()
{
    try
    {
        Bureaucrat agent("agent", 2);
        Bureaucrat partner("partner", 45);

        Form tax("number ten", 10, 5);
        Form permit("faraway", 50, 20);

        std::cout << tax << std::endl;
        std::cout << permit << std::endl;

        partner.signForm(tax);
        agent.signForm(tax);

        std::cout << tax << std::endl;
        partner.signForm(permit);
        std::cout << permit << std::endl;
        try
        {
            Form invalid("BadForm", 0, 10);
        }
        catch (std::exception& e)
        {
            std::cout << "Caught exception creating form: " << e.what() << std::endl;
        }
    }
    catch (std::exception& e)
    {
        std::cout << "Unexpected exception: " << e.what() << std::endl;
    }
    return 0;
}
