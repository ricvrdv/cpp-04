/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjesus-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 15:32:12 by rjesus-d          #+#    #+#             */
/*   Updated: 2025/08/02 15:32:13 by rjesus-d         ###   ########.fr       */
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
