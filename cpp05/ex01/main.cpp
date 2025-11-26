/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 17:02:09 by brunogue          #+#    #+#             */
/*   Updated: 2025/11/26 17:26:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main()
{
    try
    {
        Bureaucrat alice("Alice", 2);
        Bureaucrat bob("Bob", 45);

        Form tax("TaxForm", 10, 5);
        Form permit("Permit", 50, 20);

        std::cout << tax << std::endl;
        std::cout << permit << std::endl;

        // Bob tries to sign tax -> grade 45 > 10 -> should fail
        bob.signForm(tax);

        // Alice tries to sign tax -> grade 2 <= 10 -> should succeed
        alice.signForm(tax);

        std::cout << tax << std::endl;

        // Bob tries to sign permit -> grade 45 <= 50 -> should succeed
        bob.signForm(permit);
        std::cout << permit << std::endl;

        // Try constructing an invalid form -> should throw
        try
        {
            Form invalid("BadForm", 0, 10); // grade 0 invalid
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
