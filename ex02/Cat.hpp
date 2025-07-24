/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: applecore <applecore@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 19:12:24 by rjesus-d          #+#    #+#             */
/*   Updated: 2025/07/25 00:45:56 by applecore        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class	Cat : public AAnimal
{
	private:

		Brain*	_pBrain;

	public:

        Cat( void );
        Cat( Cat const &other );
        Cat&    operator=( Cat const &other );
        ~Cat( void );
        
        void    makeSound( void ) const;
		
		std::string	getIdea( int index ) const;
		void		setIdea( int index, const std::string& idea );
};

#endif
