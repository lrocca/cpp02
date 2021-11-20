/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 20:28:26 by lrocca            #+#    #+#             */
/*   Updated: 2021/11/11 20:54:09 by lrocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point {
	private:
		Fixed const	_x;
		Fixed const	_y;
	public:
		Point();
		Point(Point const &other);
		Point(Fixed const x, Fixed const y);
		~Point();

		Point&	operator=(Point const &other);

		Fixed const &getX(void) const;
		Fixed const &getY(void) const;
};

#endif
