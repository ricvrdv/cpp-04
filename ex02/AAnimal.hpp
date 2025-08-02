/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjesus-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 15:25:22 by rjesus-d          #+#    #+#             */
/*   Updated: 2025/08/02 15:25:23 by rjesus-d         ###   ########.fr       */
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
