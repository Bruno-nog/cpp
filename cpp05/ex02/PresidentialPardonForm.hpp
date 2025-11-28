/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 21:56:33 by marvin            #+#    #+#             */
/*   Updated: 2025/11/27 21:56:33 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_PARDON_FORM_HPP
#define PRESIDENTIAL_PARDON_FORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
private:
    std::string _target;

public:
    PresidentialPardonForm(const std::string &target);
    virtual ~PresidentialPardonForm();

    virtual void executeAction() const;
};

#endif
