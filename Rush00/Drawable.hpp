/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Drawable.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvikhrov <yvikhrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 14:15:16 by yvikhrov          #+#    #+#             */
/*   Updated: 2018/10/07 14:17:31 by yvikhrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DRAWABLE_HPP
# define DRAWABLE_HPP

# include "BoundingBox.hpp"

# include <string>

class Drawable : public BoundingBox {
public:
    Drawable(double xMin = 0.0, double yMin = 0.0, double width = 0.0, double height = 0.0, double speedX = 0.0, double speedY = 0.0, std::string shape = "*");
    Drawable(Drawable const& draw);
    ~Drawable();
    Drawable &operator=(Drawable const &draw);

    std::string &shape();
    std::string const& shape() const;

    void Draw() const;

private:
    std::string m_shape;
};

#endif
