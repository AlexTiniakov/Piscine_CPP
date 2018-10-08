/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otiniako <otiniako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 17:50:08 by otiniako          #+#    #+#             */
/*   Updated: 2018/10/08 22:59:45 by otiniako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include <string>
# include <exception>


class Bureaucrat
{

public:
    Bureaucrat(std::string name, int grade);
    ~Bureaucrat(void);
    Bureaucrat(Bureaucrat const &rhs);
	Bureaucrat  &operator=(Bureaucrat const &rhs);

    std::string getName(void) const;
    int         getGrade(void) const;
    Bureaucrat  &operator++(void);
	Bureaucrat  operator++(int);
	Bureaucrat  &operator--(void);
	Bureaucrat  operator--(int);

    struct GradeTooHighException: public std::exception {
        virtual const char* what() const throw();
    };
    struct GradeTooLowException: public std::exception {
        virtual const char* what() const throw();
    };

private:
    std::string _name;
    int         _grade;

    Bureaucrat(void);
};

std::ostream &	operator<<(std::ostream & o, Bureaucrat const & rhs);


#endif