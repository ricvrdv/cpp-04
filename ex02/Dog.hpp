/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: applecore <applecore@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 19:10:31 by rjesus-d          #+#    #+#             */
/*   Updated: 2025/07/25 00:45:53 by applecore        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class	Dog : public AAnimal
{
	private:

		Brain*	_pBrain;

	public:

        Dog( void );
        Dog( Dog const &other );
        Dog&    operator=( Dog const &other );
        ~Dog( void );
        
        void    makeSound( void ) const;

		std::string	getIdea( int index ) const;
		void		setIdea( int index, const std::string& idea );
};

#endif
