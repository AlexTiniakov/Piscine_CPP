/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otiniako <otiniako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 16:47:16 by otiniako          #+#    #+#             */
/*   Updated: 2018/10/06 16:47:49 by otiniako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP
# include "ISquad.hpp"

class Squad : public ISquad
{
typedef struct s_list
{
	ISpaceMarine	*instance;
	s_list			*next;
}				t_list;

private:
	int		_nb;
	t_list	*_list;

public:
	Squad( void );
	Squad( Squad const & src );
	~Squad( void );

	int		getCount() const;
	ISpaceMarine*	getUnit( int index ) const;
	int		push( ISpaceMarine* sm );
	
	Squad& operator=(Squad const & rhs);
};

#endif
