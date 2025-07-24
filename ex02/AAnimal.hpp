/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: applecore <applecore@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 19:08:03 by rjesus-d          #+#    #+#             */
/*   Updated: 2025/07/25 00:44:08 by applecore        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
# include <string>

class	AAnimal
{
    protected:

        std::string type;

    public:

        AAnimal( void );
		AAnimal( AAnimal const &other );
		AAnimal&	operator=( AAnimal const &other );
		virtual	~AAnimal( void );

		virtual void	makeSound( void ) const = 0;
		std::string		getType( void ) const;
};

#endif
