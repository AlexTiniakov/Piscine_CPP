/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otiniako <otiniako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 22:44:47 by otiniako          #+#    #+#             */
/*   Updated: 2018/10/09 00:04:45 by otiniako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
#include "Form.hpp"
#include "Bureaucrat.hpp"

class Form
{
private:
    std::string const _name;
    bool        _signed;
    int         const _grade_sign;
    int         const _grade_execute;

    Form(void);

public:
    Form(std::string name, int grade_sign, int grade_execute);
    ~Form(void);
    Form(Form const &rhs);
	Form  &operator=(Form const &rhs);

    std::string getName(void) const;
    int         getGrade_sign(void) const;
    int         getGrade_execute(void) const;
    bool        getSignet(void) const;
    void        beSigned(Bureaucrat &rhs);

    struct GradeTooHighException: public std::exception {
        virtual const char* what() const throw();
    };
    struct GradeTooLowException: public std::exception {
        virtual const char* what() const throw();
    };
};

std::ostream &	operator<<(std::ostream & o, Form const & rhs);


#endif