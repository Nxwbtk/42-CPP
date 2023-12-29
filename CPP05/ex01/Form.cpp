/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 00:15:30 by bsirikam          #+#    #+#             */
/*   Updated: 2023/12/29 11:53:58 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void): _gradeToSign(150), _gradeToExecute(150)
{

};

Form::~Form(void)
{

};

Form::Form(const Form& cp): _name(cp._name), _gradeToSign(cp._gradeToSign), _gradeToExecute(cp._gradeToExecute)
{

};

Form& Form::operator=(const Form &cp)
{
    if (this != &cp)
    {
        this->_signed = cp._signed;
    }
    return (*this);
};