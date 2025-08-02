/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjesus-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 15:23:22 by rjesus-d          #+#    #+#             */
/*   Updated: 2025/08/02 15:23:24 by rjesus-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class	Cat : public Animal
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
