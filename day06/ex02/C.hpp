/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otiniako <otiniako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 22:11:31 by otiniako          #+#    #+#             */
/*   Updated: 2018/10/10 22:19:23 by otiniako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_H
# define C_H
# include "Base.hpp"

class C : public Base
{
public:
	C(void);
	C(C &obj);
	virtual ~C(void);
	C &operator=(C const &r);
};

#endif