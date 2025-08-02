/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjesus-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 15:33:39 by rjesus-d          #+#    #+#             */
/*   Updated: 2025/08/02 15:33:42 by rjesus-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class   ICharacter;

class   AMateria
{
    protected:

        std::string const	_type;

    public:

        AMateria();
        AMateria( std::string const &type );
		AMateria( AMateria const &other );
		AMateria&	operator=( AMateria const &other );
		virtual ~AMateria();
		

        std::string const &getType() const;
        
        virtual AMateria*	clone() const = 0;
        virtual void	use( ICharacter &target );
};

#endif
