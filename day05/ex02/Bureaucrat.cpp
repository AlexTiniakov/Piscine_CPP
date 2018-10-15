/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otiniako <otiniako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 17:50:14 by otiniako          #+#    #+#             */
/*   Updated: 2018/10/09 00:09:46 by otiniako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(std::string name, int grade) {
    _name = name;
    try {
        if (grade > 150)
            throw Bureaucrat::GradeTooLowException();
        else if (grade < 1)
            throw Bureaucrat::GradeTooHighException();
        else
            _grade = grade;
    }
    catch (std::exception &e) {
        std::cout << "\"" + _name + "\": " << e.what() << std::endl;
        _grade = 1;
    }
}

Bureaucrat::Bureaucrat(Bureaucrat const &rhs) {
    *this = rhs;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const &rhs) {
    _name = rhs._name;
    _grade = rhs._grade;
    return (*this);
}

Bureaucrat  &Bureaucrat::operator++(void) {
    try {
        if (this->_grade < 2)
            throw Bureaucrat::GradeTooHighException();
        else
            _grade--;
    }
    catch (std::exception &e) {
        std::cout << "\"" + _name + "\": " << e.what() << std::endl;
    }
	return (*this);
}

Bureaucrat  Bureaucrat::operator++(int) {
    Bureaucrat	newB;

	newB = *this;
	try {
        if (this->_grade < 2)
            throw Bureaucrat::GradeTooHighException();
        else
            _grade--;
    }
    catch (std::exception &e) {
        std::cout << "\"" + _name + "\": " << e.what() << std::endl;
    }
	return (newB);
}


Bureaucrat  &Bureaucrat::operator--(void) {
    try {
        if (this->_grade > 149)
            throw Bureaucrat::GradeTooLowException();
        else
            _grade++;
    }
    catch (std::exception &e) {
        std::cout << "\"" + _name + "\": " << e.what() << std::endl;
    }
	return (*this);
}


Bureaucrat  Bureaucrat::operator--(int) {
    Bureaucrat	newB;

	newB = *this;
	try {
        if (this->_grade > 149)
            throw Bureaucrat::GradeTooLowException();
        else
            _grade++;
    }
    catch (std::exception &e) {
        std::cout << "\"" + _name + "\": " << e.what() << std::endl;
    }
	return (newB);
}

void        Bureaucrat::signForm(std::string name, bool is) const {
    if (is == true)
        std::cout << _name << " signs " << name << std::endl;
    else
        std::cout << _name << " cannot sign " << name << " because of too low grade to" <<std::endl;
}

std::string Bureaucrat::getName(void) const
{
    return _name;
}
int         Bureaucrat::getGrade(void) const
{
    return _grade;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Exception: grade is too high!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Exception: grade is too low!";
}

std::ostream &	operator<<(std::ostream & o, Bureaucrat const & rhs)
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << ".";
	return o;
}
