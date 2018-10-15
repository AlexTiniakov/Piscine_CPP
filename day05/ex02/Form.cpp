/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otiniako <otiniako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 22:44:38 by otiniako          #+#    #+#             */
/*   Updated: 2018/10/09 00:08:48 by otiniako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): _name("NONE"), _signed(false), _grade_sign(1), _grade_execute(1) {}

Form::~Form() {}

Form::Form(std::string name, int grade_sign, int grade_execute):
			_name(name), _signed(false), _grade_sign(grade_sign), _grade_execute(grade_execute)
{
	try {
        if (grade_sign > 150 || grade_execute > 150)
            throw Form::GradeTooLowException();
        else if (grade_sign < 1 || grade_execute < 1)
            throw Form::GradeTooHighException();
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}

Form::Form(Form const &rhs): _name(rhs._name), _signed(rhs._signed),
	_grade_sign(rhs._grade_sign), _grade_execute(rhs._grade_execute) {
	*this = rhs;
}

Form  &Form::operator=(Form const &rhs) {
	this->_signed = rhs._signed;
	return (*this);
}

void        Form::beSigned(Bureaucrat &rhs) {
	try {
		if (rhs.getGrade() > _grade_sign)
			throw Form::GradeTooLowException();
		else
			_signed = true;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	rhs.signForm(_name, _signed);
}

std::string Form::getName(void) const {
	return _name;
}

int         Form::getGrade_sign(void) const {
	return _grade_sign;
}

int         Form::getGrade_execute(void) const {
	return _grade_execute;
}

bool        Form::getSignet(void) const {
	return _signed;
}

const char* Form::GradeTooHighException::what() const throw() {
    return "Exception: grade is too high";
}

const char* Form::GradeTooLowException::what() const throw() {
    return "Exception: grade is too low";
}

std::ostream &	operator<<(std::ostream & o, Form const & rhs)
{
	o << "Form" << rhs.getName() << ", grade to sign: " << rhs.getGrade_sign()
	<< ", grade to execute: " << rhs.getGrade_execute() << ", is signed: "
	<< rhs.getSignet() << ".";
	return o;
}