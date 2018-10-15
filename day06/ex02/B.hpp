/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otiniako <otiniako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 22:11:25 by otiniako          #+#    #+#             */
/*   Updated: 2018/10/10 22:16:53 by otiniako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_H
# define B_H
# include "Base.hpp"

class B: public Base
{
public:
	B(void);
	B(B &obj);
	virtual ~B(void);
	B &operator=(B const &r);

}; 

#endif