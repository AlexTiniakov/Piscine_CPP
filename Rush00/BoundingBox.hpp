/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BoundingBox.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvikhrov <yvikhrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 13:39:52 by yvikhrov          #+#    #+#             */
/*   Updated: 2018/10/07 14:21:10 by yvikhrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BOUNDINGBOX_HPP
# define BOUNDINGBOX_HPP

class BoundingBox
{
public:
    BoundingBox(double xMin = 0.0, double yMin = 0.0, double width = 0.0, double height = 0.0, double speedX = 0.0, double speedY = 0.0);
    ~BoundingBox();

    BoundingBox(BoundingBox const& box);
    BoundingBox& operator=(BoundingBox const& box);

    bool IntersectedBy(BoundingBox const& box) const;

    double width() const;
    double height() const;
    double xMin() const;
    double yMin() const;
    double xMax() const;
    double yMax() const;
    double center() const;

    double& speedX();
    double& speedY();
    double const& speedX() const;
    double const& speedY() const;

    void Move(double dt);

private:
    double m_xMin;
    double m_yMin;
    double m_width;
    double m_height;
    double m_speedX;
    double m_speedY;
};

#endif
