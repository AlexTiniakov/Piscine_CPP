/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otiniako <otiniako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 22:11:11 by otiniako          #+#    #+#             */
/*   Updated: 2018/10/10 22:15:29 by otiniako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_H
# define A_H
# include "Base.hpp"

class A: public Base
{
public:
	A(void);
	A(A &obj);
	virtual ~A(void);
	A &operator=(A const &r);
};

#endif