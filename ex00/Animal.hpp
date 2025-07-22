/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjesus-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 19:08:03 by rjesus-d          #+#    #+#             */
/*   Updated: 2025/07/22 19:09:02 by rjesus-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class	Animal
{
    protected:

        std::string type;

    public:

        Animal( void );
		Animal( Animal const &other );
		Animal&	operator=( Animal const &other );
		~Animal( void );

		virtual void	makeSound( void );
		std::string		getType( void ) const;
};

#endif
