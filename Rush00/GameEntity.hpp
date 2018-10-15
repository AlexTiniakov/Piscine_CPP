/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GameEntity.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otiniako <otiniako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 15:45:40 by yvikhrov          #+#    #+#             */
/*   Updated: 2018/10/07 19:36:56 by otiniako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAMEENTITY_HPP
# define GAMEENTITY_HPP

# include "Drawable.hpp"

class GameEntity : public Drawable {
public:
    GameEntity(double xMin = 0.0, double yMin = 0.0, double width = 0.0, double height = 0.0, double speedX = 0.0, double speedY = 0.0, std::string shape = "*");
    ~GameEntity();

private:
    int m_health;
};

#endif
